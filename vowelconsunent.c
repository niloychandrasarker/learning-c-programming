#include <stdio.h>   
int main(int argc, char const *argv[])
{
  char ch;
  printf("input a letter:");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  printf("this is vowel");
  else
  printf("this is consunent");
}