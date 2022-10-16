#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=10;
    int *ptr;
    ptr=&x;
    printf("%d\n",x);
      printf("%d\n",&x);
        printf("%d\n",ptr);
          printf("%d\n",*ptr);
    return 0;
}
