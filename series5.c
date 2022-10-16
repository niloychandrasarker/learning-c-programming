#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,result=1;
       printf("enter N= ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
         printf("%d ",i);
       result=result*i;
       } 
        printf("\nsum=%d\n",result);
    return 0;
}

