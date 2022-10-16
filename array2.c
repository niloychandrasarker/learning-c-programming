//minimum & maximum
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[100],n,i;
  printf("How many number= ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&num[i]);
  }
  int max  = num[0];
    int min  = num[0];
    for(i=0; i<n; i++)
    {
     if(max<num[i])
     max=num[i];
     if(min>num[i])
     min=num[i];
    }
    printf("Maximum= %d\n",max);
   printf("minimum= %d\n",min);
  
    return 0;
}
