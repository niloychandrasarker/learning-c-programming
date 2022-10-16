//swapping
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char str1[]="niloy";
    char str2[]="omrit";
     char temp[15];
     strcpy(temp,str1);
     strcpy(str1,str2);
      strcpy(str2,temp);
      printf("after swapping\n");
   printf("string1= %s\n",str1);
   printf("string2= %s\n",str2);
   
}
