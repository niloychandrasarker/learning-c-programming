#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,sum=0;
       printf("enter N= ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
        printf("%d ",i);
       sum=sum+i*i;
       } 
        printf("\nsum=%d\n",sum);
    return 0;
}

