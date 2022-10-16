//string compare
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str1[]="my name is";
    char str2[]="niloy";
    int d = strcmp(str1,str2);
  if (d==0)
  {
    printf("string are equal");
  }
  
   else
   printf("string are not equal");
}
