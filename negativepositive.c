#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a num: ");
    scanf("%d",&num);


    if(num>0)
     printf("positive");
    else if(num<0)
       printf("negative");
    else
       printf("zero");

    return 0;
}

