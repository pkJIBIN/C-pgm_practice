#include<stdio.h>
int main()
{ int num,i,j,pro;
   printf("Enter a number");
   scanf("%d",&num);
for(i=1;i<=10;i++)
{
  pro=num*i;
  printf("%d * %d = %d\n",i,num,pro);
  }
return 0;
}
