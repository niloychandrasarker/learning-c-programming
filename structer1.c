#include<stdio.h>
struct persion
{
 int age;
 float salary;
};

int main(int argc, char const *argv[])
{
   
   struct persion persion1,persion2;
persion1.age=27;
persion1.salary=50000;
printf("persion1\n");
printf("age= %d\n",persion1.age);
printf("salary= %.2f\n",persion1.salary);
printf("\n");
persion2.age=20;
persion2.salary=40000;
printf("persion2\n");
printf("age= %d\n",persion2.age);
printf("salary= %.2f\n",persion2.salary);
  
   
    return 0;
}
