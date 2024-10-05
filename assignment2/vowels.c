#include<stdio.h>
int main()
{ char ch;
  printf("Please enter any letter");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {printf("The letter is vowel");}
  else
   { printf("The letter is a consonent");}
return 0;
}
