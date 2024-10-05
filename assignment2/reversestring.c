#include<stdio.h>
int main()
{
      int i,l;
        char temp, str[50]="REVERSE MALAYALAM";
int count=0;
for(i=0;str[i]!='\0';i++)
{ 
  count=count+1;
}
printf("%d\n",count);
int first = 0;
l=count-1;
while(first<l)
{

 char  temp=str[first];
  str[first]=str[l];
  str[l]= temp;

 first++;
 l--;
}

printf("The reverse:  %s",str);
return 0;
}
