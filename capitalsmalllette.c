#include <stdio.h>
int main()
{
    char ch;
    printf("any letter: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("capital");
    if(ch>='a' && ch<='z')
    printf("small");
    else
    printf("not a lette");
    return 0;
}
