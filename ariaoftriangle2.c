#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,s,aria;
    printf("input 3 num= ");
    scanf("%f %f %f",&a,&b,&c);
    s=(float)a+b+c/2;
    aria=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("aria= %f\n",aria);

    return 0;
}
