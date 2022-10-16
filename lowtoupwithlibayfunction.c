#include <stdio.h>

int main(int argc, char const *argv[])
{
    char low,up;
    printf("input a low: ");
    scanf("%c",&low);
    up = toupper(low);
    printf("up latter:%c",up);
    return 0;
}
