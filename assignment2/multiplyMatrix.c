#include<stdio.h>
int main()
{
  int r,c,r2,c2,i,j,sum;
printf("Enter the no:of row and no:of columns of first matrix");
scanf("%d%d",&r,&c);
int arr[r][j];
for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
    {
      printf("enter the element a%d%d ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
 }
printf("Enter the no:of row and columns of second matrix");
scanf("%d%d",&r2,&c2);
if(c==r2)
{
int arr2[r2][c2];
for(i=0;i<r2;i++)
  {
     for(j=0;j<c2;j++)
      {
        printf("Enter the element b%d%d ",i+1,j+1);
        scanf("%d",&arr[i][j]);
       }
  }
int arr3[c][r2];

for (i=0;i<r;i++)
  { 
   for(j=0;j<c2;j++)
   {
	sum=sum+(arr[i][j]*arr2[j][i]);
   }
 }
for(i=0;i<r;i++)
  {
    for(j=0;j<c2;j++)
     printf("%d ",arr3[i][j]);
      if(j==r2)
      printf("\n");
   }
}
else
   printf("Multiplication is not possible");
return 0;
}
