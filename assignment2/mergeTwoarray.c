#include<stdio.h>
int main()
{  int arr1[20],arr2[20],arr3[40],n,m,i,j,size;
   printf("Enter the size of both arrays");
   scanf("%d%d",&n,&m);
   size=n+m;
   arr3[size];
   printf("Enter the elements of the first array");
  for(i=0;i<n;i++)
    scanf("%d",&arr1[i]);
printf("Enter the elements of the second array");
 for(j=0;j<m;j++)
   scanf("%d",&arr2[j]);
 for(i=0;i<n;i++)
  arr3[i]=arr1[i];
for(i=0;i<m;i++)
  arr3[i+n]=arr2[i];
for(i=0;i<size;i++)
printf("%d ",arr3[i]);
return 0;
}
