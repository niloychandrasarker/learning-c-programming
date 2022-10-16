#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("input x= ");
    scanf("%d",&x);
    printf("input y= ");
    scanf("%d",&y);
     
    double result=pow(x,y);
    printf("result= %.2lf\n",result);
    return 0;
}
