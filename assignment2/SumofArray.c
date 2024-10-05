#include<stdio.h>
int main()
 {  int arr[50],sum=0,n,i,j;
    printf("Enter the size of the array");
    scanf("%d",&n);
printf("Enter %d numbers",n);
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
for(j=0;j<n;j++)
  sum=sum+arr[j];
printf("The sum of elements of the array is=%d",sum);
 return 0;
}
