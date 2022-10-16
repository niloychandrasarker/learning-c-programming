#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,numOfRows,numOfCols,sum=0;
    int A[10] [10],transpose[10][10];
    printf("Enter the numnber of rows & cols= ");
    scanf("%d %d",&numOfRows,&numOfCols);
    //scanning A matrix
    printf("Enter element of A matrix=\n ");
    for(i=0; i<numOfRows; i++)
    {
        for(j=0; j<numOfCols; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i] [j]);
        }
       printf("\n");
    }
     //print A matrix
    printf("\nEntered matrix= \n");
    for(i=0; i<numOfRows; i++)
    {
      
        for(j=0; j<numOfCols; j++)
        {
            printf("%d ",A[i] [j]);
        }
        printf("\n");
    }
   //sum of diagonal eliments
   printf(" diagonal eliments: \n");
    for(i=0; i<numOfRows; i++)
    {
      
        for(j=0; j<numOfCols; j++)
        {
            if (i==j)
            {
             printf("%d",A[i][j]);
             sum=sum+A[i][j];
            }
            
        }
        printf("\n");
    }
    printf("\nSum of the diagonal eliments= %d",sum);
    return 0;
}