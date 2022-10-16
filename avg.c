#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    int sum;
    float avg;
    printf("intput to num: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is:%d\n",sum);
    avg =(float) sum/2;
    printf("the avg is:%f",avg);
    return 0;
}
