#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    float temp,converttemp;
    printf("temparature convertation menu\n");
    printf("1.farenheit to celcius\n");
    printf("1.celcius to farenheit\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
    {
        printf("enter the farenheit temparature: ");
        scanf("%f",&temp),
        converttemp=(temp-32)/1.8;
        printf("the temperature in celcius is:%f\n",converttemp);

        break;
    }
    case 2 :
    {
        printf("enter the celcius temparature: ");
        scanf("%f",&temp),
        converttemp=(1.8*temp)+32;
        printf("the temperature in farenheit is:%f\n",converttemp);

        break;
    }
 default :
 printf("not a correct");

    }


}
