#include<stdio.h>
int main()
{  int num,rem,rev=0;
  printf("Enter a number");
  scanf("%d",&num);
  while(num!=0)
  { rem=num%10;
    rev=rev+rem;
    num=num/10;
  }
printf("The sum of digits of the number is %d",rev);
return 0;
}
