#include <stdio.h>
int main()
{ int n,i,third,first=0,second=1;
  printf("Enter the number of terms");
 scanf("%d",&n);
printf("%d %d ",first,second);
 for(i=2;i<n;i++)
{ third=first+second;
  printf("%d ",third);
  first=second;
  second=third;
 }
return 0;
}
