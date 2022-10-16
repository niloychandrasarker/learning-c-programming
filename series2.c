#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,sum=0;
       printf("enter N= ");
       scanf("%d",&n);
       for(i=2;i<=n;i=i+2)
       {
         printf("%d ",i);
       sum=sum+i;
       } 
        printf("\nsum=%d\n",sum);
    return 0;
}

