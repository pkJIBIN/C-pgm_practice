#include<stdio.h>
int main()
{ int arr[50],n,temp,i,j;
  printf("Enter the length of the array");
  scanf("%d",&n);
  printf("Enter %d elements",n);
 for( i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=0;i<n-1;i++)
 {  for(j=i+1;j<n;j++)
      { if(arr[i]<arr[j])
         { temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          } 
        }
 }
printf("The largest number in the array is %d",arr[0]);
return 0;
}
