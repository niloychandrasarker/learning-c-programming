#include <stdio.h>
int main(int argc, char const *argv[])
{
    while(1)
    {
    
    int num,temp,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
          r=temp%10;
          sum=sum+r*r*r;
          temp=temp/10;
    }
    if (num==sum)
    {
    printf("this is armstrong number\n");
    }
    else
      printf("this is not armstrong number\n");

    }
    
}
