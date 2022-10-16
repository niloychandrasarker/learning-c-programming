#include <stdio.h>
int main(int argc, char const *argv[])
{
   double i,n,sum=0;
       printf("enter N= ");
       scanf("%lf",&n);
       for(i=1;i<=n;i++)
       {
        if(i==1)
        printf("1\n + ");
        else if(i==n)
         printf("1/%lf ",i);
         else
          printf("1/%lf + ",i);
       sum=sum+1/i;
       } 
        printf("\nsum=%lf\n",sum);
    return 0;
}

