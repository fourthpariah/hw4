#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
  mkdir("dir1", S_IRUSR | S_IWUSR | S_IXUSR);
  
  chdir("dir1");
  
  creat("file10", S_IRUSR | S_IWUSR | S_IXUSR);
  
  chdir("../");
  
  mkdir("dir2", S_IRUSR | S_IWUSR | S_IXUSR);
  
  chdir("dir2");
  
  creat("file20", S_IRUSR | S_IWUSR | S_IXUSR);
  
  chdir("../");
  
  creat("file1", S_IRUSR | S_IWUSR | S_IXUSR);
  
  symlink("dir2/file20", "link1");
}