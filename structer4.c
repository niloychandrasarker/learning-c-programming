#include<stdio.h>
struct persion
{
    char name[40];
 int age;
 float salary;
};
int main(int argc, char const *argv[])
{
    struct persion persion[4];
    int i;
    for(i=0;i<2;i++)
    {
      printf("\nenter information for persion %d\n",i+1);
      printf("Enter Name= ");
      fflush(stdin);
      gets(persion[i].name);
      printf("Enter age= ");
      scanf("%d",&persion[i].age);
      printf("Enter salary= ");
         scanf("%f",&persion[i].salary);
    }
      for(i=0;i<2;i++)
    {
      printf("\n\ninformation for persion %d \n",i+1);
       printf("name= %s\n",persion[i].name);
      printf("age= %d\n",persion[i].age);
      printf("salary= %f\n",persion[i].salary);
        
    }
    return 0;
}
