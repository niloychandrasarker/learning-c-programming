#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    int A[3] [4] = {  {12,13,23,34 }, {43,54,34,64 }, {34,54,75,35 }  };
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d 
            ",A[i] [j]);
        }
        printf("\n");
    }
    return 0;
} 
