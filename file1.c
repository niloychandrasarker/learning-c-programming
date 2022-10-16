#include <stdio.h>
int main()
{
  FILE *file;
  char name[20]="nil;oy sarker";
  int length=strlen(name);
  int i;
  file=fopen("test.txt","w");
  if (file==NULL)
  {
   printf("file does not exit");
  }
  else
  {
  printf("file is open\n");
  for ( i = 0; i < length; i++)
  {
    fputc(name[i],file);
  }
  printf("file is written succesfully\n");
fclose(file);
  }
    return 0;
}
