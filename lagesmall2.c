#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("input 3 num: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("lage num is=%d\n",a);
     if(b>a && b>c)
    printf("lage num is=%d\n",b);
     if(c>b && c>a)
    printf("lage num is=%d\n",c);
    else
    printf("num ae equal");
    return 0;
}
