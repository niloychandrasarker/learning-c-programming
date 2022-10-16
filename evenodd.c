#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("input a num: ");
    scanf("%d",&a);
    if(a%2==0)
       printf("this is even num\n");
    else
    printf("this is odd num\n");  

    return 0;
}
