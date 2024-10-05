#include<stdio.h>
int main()
{ int arr[20],n,i,pos,a;
  printf("Enter the size of the Array");
  scanf("%d",&n);
printf("Enter the elements\n");
 for(i=0;i<n;i++)
 	scanf("%d",&arr[i]);
n++;
printf("Enter the position where a new element is to be added");
scanf("%d",&pos);
printf("Enter the new element");
scanf("%d",&a);
for(i=n-1;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=a;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
