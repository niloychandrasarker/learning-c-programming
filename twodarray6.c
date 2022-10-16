#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, numOfRows, numOfCols, sum = 0;
    int A[10][10], transpose[10][10];
    printf("Enter the numnber of rows & cols= ");
    scanf("%d %d", &numOfRows, &numOfCols);
    // scanning A matrix
    printf("Enter element of A matrix=\n ");
    for (i = 1; i <= numOfRows; i++)
    {
        for (j = 1; j <= numOfCols; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    // print A matrix
    printf("\nEntered matrix= \n");
    for (i = 1; i <= numOfRows; i++)
    {

        for (j = 1; j <= numOfCols; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    // sum of diagonal eliments
    printf(" \nodd eliments: \n");
    int t1 = 3;
    int t2 = 1;
    for (i = 1; i <= numOfRows; i++)
    {

        for (j = 1; j <= numOfCols; j++)
        {
            if ((t1 / 3) == t2)
            {
                printf("%d", A[i][j]);
                printf("\n");
                t2 = t2+1;
            }
            t1 = t1+1;
           
        }
    }

    return 0;
}