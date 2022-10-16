#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s1[]="suporna";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
         len++;
    }
    printf("LENGTH= %d\n",len);
    return 0;
}
