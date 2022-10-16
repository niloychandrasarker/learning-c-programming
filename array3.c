//sum
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array1[30],array2[30],n,i;
  printf("How many number= ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&array1[i]);
  }
  printf("array1: ");
    for(i=0; i<n; i++)
    {
    printf("%d",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\narray2= ");
     for(i=0; i<n; i++)
    {
        printf("%d",array2[i]);
    }
    return 0;
}
