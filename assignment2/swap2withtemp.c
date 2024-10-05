#include <stdio.h>
int main()
{ 
  int num1,num2,temp;
  printf("Please enter two numbers");
  scanf("%d%d",&num1,&num2);
  printf("a=%d, b=%d",num1,num2);
  temp=num1;
  num1=num2;
  num2=temp;
printf("\n swapped a=%d,b=%d",num1,num2);
return 0;
}
