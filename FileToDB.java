
import java.sql.*;
import java.util.*;
import java.io.*;
public class FileToDB {
  public static void main(String args[]){
 
    try {
      Statement stmt;
      ResultSet rs;
 long start_time=System.currentTimeMillis();
      //Register the JDBC driver for MySQL.
      Class.forName("com.mysql.jdbc.Driver");

      //Define URL of database server for
      // database named JunkDB on the localhost
      // with the default port number 3306.
      String url =
            "jdbc:mysql://localhost:3306/KDD";

      //Get a connection to the database for a
      // user named auser with the password
      // drowssap, which is password spelled
      // backwards.
      Connection con =
                     DriverManager.getConnection(
                        url,"root", "123456");

      //Display URL and connection information
      System.out.println("URL: " + url);
      System.out.println("Connection: " + con);

      //Get a Statement object
      stmt = con.createStatement();
stmt.execute(" drop table kdd_cup_1999 ;");
stmt.executeUpdate("create table kdd_cup_1999 ( duration int, protocol_type varchar(5), service varchar(10) , flag varchar(10) , src_bytes int ,dst_bytes int , land int , wrong_fragment int , urgent int , hot int , num_failed_logins int, logged_in int , lnum_compromised int , lroot_shell int , lsu_attempted int ,lnum_root int ,lnum_file_creations int ,lnum_shells int ,lnum_access_files int ,lnum_outbound_cmds int ,is_host_login int, is_guest_login int , count int,srv_count int ,serror_rate int, srv_serror_rate int , rerror_rate int ,srv_rerror_rate int , same_srv_rate int , diff_srv_rate int , srv_diff_host_rate int , dst_host_count int , dst_host_srv_count int , dst_host_same_srv_rate int , dst_host_diff_srv_rate int , dst_host_same_src_port_rate int, dst_host_srv_diff_host_rate int , dst_host_serror_rate int , dst_host_srv_serror_rate int , dst_host_rerror_rate int , dst_host_srv_rerror_rate int , label varchar(20) );");
	  
	  // author : karthik selvakumar 
	  String toSplit=args[0];
 	BufferedReader br=new BufferedReader(new FileReader(toSplit));
	  PrintWriter out=null;
	int line_count=0;
	String ch=null;
	String name=null;
	int split_count=0;
	String insert=null;
	System.out.println(" Inserting KDD data please wait .... It may take several hours  .... ");
	while((ch=br.readLine())!=null)
	{
	    insert=" insert into kdd_cup_1999 values (";
		StringTokenizer tuple=new StringTokenizer(ch,",");
		while(tuple.hasMoreTokens()){
		insert+="\'"+tuple.nextToken()+"\',";
		}
		insert=insert.substring(0,insert.length()-1);
		insert+=");";	
		//System.out.println(insert);
		stmt.executeUpdate(insert);
		}

   long end_time=System.currentTimeMillis();
		
System.out.println(" Total Time is :"+(end_time-start_time));
    }catch( Exception e ) {
      e.printStackTrace();
    }//end catch
  }//end main
}//end class 