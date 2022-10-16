#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,numOfRows,numOfCols,uppersum=0,lowersum=0;
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
   //sum of upper and lower triangle eliments
 
    for(i=0; i<numOfRows; i++)
    {
      
        for(j=0; j<numOfCols; j++)
        {
            if (i<j)
            {
            
             uppersum=uppersum+A[i][j];
            }
              if (i>j)
            {
            
             lowersum=lowersum+A[i][j];
            }
            
        }
        printf("\n");
    }
    printf("\nSum of upper triangle eliments= %d",uppersum);
     printf("\nSum of lower triangle eliments= %d",lowersum);
    return 0;
}