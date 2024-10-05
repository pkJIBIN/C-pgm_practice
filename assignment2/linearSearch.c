#include<stdio.h>
int main()
{  int n,i,temp,arr[30],j,a;
  printf("Enter the size of the array");
  scanf("%d",&n);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
printf("Enter the element to be searched");
scanf("%d",&a);
temp = 0;
 for(i=0;i<=n;i++)
{ 
 if(arr[i]==a){
printf("The element %d is found at %d",a,i);
temp = 1;
}
/*else if(temp == 0)
printf("Not found");*/
}
if(temp == 0) printf("not found\n");
return 0; 
  
}
