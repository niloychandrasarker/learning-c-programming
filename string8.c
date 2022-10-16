//pelindrom
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char str1[]="niloy";
    char str2[20];
    printf("string1= %s\n",str1);
    int A = strrev(str1);
   printf("string2= %s\n",str1);
   
   
   int d=strcmp(str1,A);
   if (d==0)

   {
    printf("strinf is pelindrom");
    
  }
       else
         printf("string is not pelindrom");
   
}
