#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,numOfRows,numOfCols;
    int A[10] [10],B[10][10],C[10][10] ;
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
     //scaning B matrix
     printf("Enter element of B matrix=\n ");
    for(i=0; i<numOfRows; i++)
    {
        for(j=0; j<numOfCols; j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i] [j]);
        }
       printf("\n");
    }
    //print A matrix
    printf("A= ");
    for(i=0; i<numOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numOfCols; j++)
        {
            printf("%d ",A[i] [j]);
        }
        printf("\n");
    }
   
    //print B matrix 
    printf("\nB= ");
    for(i=0; i<numOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numOfCols; j++)
        {
            printf("%d ",B[i] [j]);
        }
        printf("\n");
    }
    //addition
    for(i=0; i<numOfRows; i++)
    {
       
        for(j=0; j<numOfCols; j++)
        {
          C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }
     //print C matrix 
    printf("\nA + B= ");
    for(i=0; i<numOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numOfCols; j++)
        {
            printf("%d ",C[i] [j]);
        }
        printf("\n");
    }

    return 0;
} 
