//vowel,consonant,digit,word,other cheak0.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char str[100],ch;
   int i,vowel,consonant,digit,word,other;
   printf("Enter a string= ");
   gets(str);
 
   i=vowel=consonant=word=digit=other=0;
   while ((ch=str[i])!='\0')
   {
  
    if (ch=='a'||ch=='e' || ch=='i' || ch=='o' ||ch=='u'||
        ch=='A'||ch=='E' || ch=='I' || ch=='O' ||ch=='U')
        
    vowel++;

  else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    consonant++;

    else if(ch>='0' && ch<='9')
    digit++;
    else if(ch==' ')
    word++;
    else
    other++;
    i++;
   }
    printf("\n");
   word++;
   printf("number of vowel=%d",vowel);
     printf("\n");
    printf("number of consonent=%d",consonant);
      printf("\n");
     printf("number of digit=%d",digit);
       printf("\n");
      printf("number of word=%d",word);
        printf("\n");
       printf("number of other=%d",other);
         printf("\n");
      
       return 0;
}
