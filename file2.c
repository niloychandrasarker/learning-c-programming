#include <stdio.h>
int main()
{
  FILE *file;
  char name[20];


  file=fopen("test2.txt","w");
  if (file==NULL)
  {
   printf("file does not exist");
  }
  else
  {
  printf("file is open\n");
 
printf("enter your versity name: ");
gets(name);
fputs(name,file);
  printf("file is written succesfully\n");
fclose(file);
  }
    return 0;
}
