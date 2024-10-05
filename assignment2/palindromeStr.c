#include<stdio.h>
int main()
{ int i,j,count=0,l;

   char str[]="malayalam";

  for(i=0;str[i]!='\0';i++)//for counting the length of the string
    {
	count=count+1;
     }
printf("%s\n",str);

printf("%d\n",count);
l=count;

printf("%d\n",l);

char str2[l+1];

 for(i=0,j=l-1;str[i]!='\0';i++,j--) //for loading the elements in str to str2
{
	str2[j]=str[i];
}
str2[l]='\0';
printf("%s\n",str2);

if(str==str2)

printf("The string is palindrome\n");

else

printf("The string is not palindrome");

return 0;
}


