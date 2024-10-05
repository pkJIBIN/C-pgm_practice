#include <stdio.h>
int main()
 { int len,i;
  char str[]="Hello world";
  printf("%s",str);
  for(i=0;str[i]!='\0';i++)
	{
      len=len+1;
	}
printf("Length of the string is %d",len);
return 0;
} 
