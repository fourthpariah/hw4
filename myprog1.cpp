#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
main()
{
  system("mkdir dir1");
  
  chdir("dir1");
  
  system("touch file10");
  
  chdir("../");
  
  system("mkdir dir2");
  
  chdir("dir2");
  
  system("touch file20");
  
  chdir("../");
  
  system("touch file1");
  
  system("ln -s dir2/file20 link2");

}