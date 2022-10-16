#include<stdio.h>
struct persion
{
 int age;
 float salary;
};

int main(int argc, char const *argv[])
{
   
   struct persion persion1,persion2;

printf("Enter informatioin for persion1\n ");
printf("Enter age= ");
scanf("%d",&persion1.age);

printf("Enter salary= ");
scanf("%f",&persion1.salary);

printf("persion1\n");
printf("age= %d\n",persion1.age);
printf("salary= %.2f\n",persion1.salary);
printf("\n");

 printf("Enter informatioin for persion2\n ");
printf("Enter age= ");
scanf("%d",&persion2.age);

printf("Enter salary= ");
scanf("%f",&persion2.salary);

printf("persion2\n");
printf("age= %d\n",persion2.age);
printf("salary= %.2f\n",persion2.salary);
  
   
    return 0;
}
