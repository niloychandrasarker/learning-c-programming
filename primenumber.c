#include <stdio.h>
int main(int argc, char const *argv[])
{ 
    while(1)
    {
        
    
    int num,i,count=0;
    printf("Enter any positive number: ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
     if(num%i==0)
     {
      count++;
      break;
     }

    }
    if(count==0)
    printf("this is prime number\n");
    else
    printf("not a primr number\n");
    }
}
