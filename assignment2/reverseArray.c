#include<stdio.h>
int main()
 { int arr[20],n,i,j,k;
   printf("Enter the size of the array");
   scanf("%d",&n);
for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("The reverse of the array is:");
for(k=n-1;k>=0;k--)
   printf("%d ",arr[k]);
return 0;
}
