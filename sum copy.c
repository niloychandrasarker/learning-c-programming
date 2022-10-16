#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    int sum,sub,mul;
    float div;
    printf("intput to num: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is:%d\n",sum);

    sub=a-b;
    printf("sub is:%d\n",sub);

    mul=a*b;
    printf("mul is:%d\n",mul);
    div=(float)a/b;
    printf("div is:%f\n",div);
    

    return 0;
}
