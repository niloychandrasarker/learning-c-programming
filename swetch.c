#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("input any letter: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
     case 'e':
      case 'i':
     case 'o':
      case 'u':
     case 'A':
      case 'E':
     case 'I':
      case 'O':
     case 'U':
     printf("VOWEL\N");

        break;
    
    default:
    printf("CONSUNENT");
        break;
    }
    return 0;
}
