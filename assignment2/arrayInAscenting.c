#include<stdio.h>
int main()
{ int arr[30];
 int n, temp;
 printf("Enter size of array (less than 30)");
 scanf("%d",&n);
 printf("Enter %d  elements",n);
for(int i=0;i<n;i++)
 {scanf("%d",&arr[i]);}
printf("Element in Array: ");
for(int i=0; i<n-1;i++)
{
   for(int j=i+1;j<n;++j)
   { if(arr[i]>arr[j])
      {  temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp; 
        }
     }
}
 for(int i=0;i<n;i++)
{ printf("%d ", arr[i]);}
return 0;
}
