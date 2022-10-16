#include <stdio.h>
int main(int argc, char const *argv[])
{
int n, col, row;
printf("Enter N: ");
scanf("%d",&n);

for(row=n;row>=1;row--)
{
    for(col=1;col<=row;col++)
    {
        printf("%d ",col);
    }
    printf("\n");

}
    return 0;
}
