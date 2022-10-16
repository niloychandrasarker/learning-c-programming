#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    char oparator;
    printf("emter any oparator(+,-,*,/)= ");
    scanf("%c",&oparator);
    printf("enter two number= ");
    scanf("%f %f",&a,&b);
    switch (oparator)
    {
    case '+':
    {
            printf("%f+%f = %f\n",a,b,a+b);
        break;
    }
     case '-':
    {
            printf("%f-%f = %f\n",a,b,a-b);
        break;
    }
     case '*':
    {
            printf("%f*%f = %f\n",a,b,a*b);
        break;
    }
     case '/':
    {
            printf("%f/%f = %f\n",a,b,a/b);
        break;
    }
    
    
    default:
    {
     printf("not a correct oparator");
    }
        break;
    }
    return 0;
}
