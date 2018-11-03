#include<stdio.h>
#include<stdlib.h>
main()
{
  system("mkdir dir1");
  
  system("cd dir1");
  
  system("touch file10");
  
  system("cd ../");
  
  system("mkdir dir2");
  
  system("cd dir2");
  
  system("touch file20");
  
  system("cd ../");
  
  system("touch file1");
  
  system("ln -s dir2/file20 link2");

}