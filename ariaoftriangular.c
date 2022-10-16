#include <stdio.h>
int main(int argc, char const *argv[])
{
    float base,height,aria;
    printf("base= ");
    scanf("%f",&base);
    printf("height= ");
    scanf("%f",&height);
    aria=(float)1/2*base*height;
   
    printf("aria=%.2f",aria);

    return 0;
}
