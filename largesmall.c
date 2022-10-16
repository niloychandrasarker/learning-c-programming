#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("input first num: ");
    scanf("%d",&a);
    printf("input second num: ");
    scanf("%d",&b);
    if(a>b)
       printf("leage= %d\n",a);
    else if(a<b)
       printf("leage=%d\n",b);
    else
       printf("equal");
    return 0;

}
