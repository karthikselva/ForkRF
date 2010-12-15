#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Number of connections to store on each file 

#define CONNECTIONS 20000
main(){
FILE *fp,*split;
FILE *label;
//Open the KDD data set

fp=fopen("kddcup.data.corrected","r");
if(fp==NULL) exit(0);
// Open labels to be appended file

char *name="kddcup";

// Each file with a count added to it 
int split_count=0;
char split_string[10];
// to get Values and lines 
int ch,lines=0;
      label=fopen("Label.txt","r");
	if(label==NULL) exit(0);

while((ch=fgetc(fp))!=EOF)
{

// Checks condition wheter its done to write in file  or it is start 

	if(lines==CONNECTIONS||lines==0){
	
//  If already another file is open then close it 



// Create unique names for splitted files 

	
	sprintf(split_string, "%d",split_count);
	strcat(name,split_string);
	strcat(name,".arff");
	printf(" File name is : %s",name);
	split=fopen(name,"w");
	
	lines=1;
 /*   int dummy;
	
	
	while((dummy=fgetc(label))!=EOF){
	fputc(dummy,split);
	}
	   */
	   	split_count++;
	}

	fputc(ch,split);
	if((char)ch=='\n'){
	lines++;
	//printf(" Number of lines : %d ",lines);
	}
}
printf(" Number of lines : %d ",lines);

scanf("%d",&ch);
return 0;
}
