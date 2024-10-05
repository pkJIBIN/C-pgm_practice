#include<stdio.h>
int main()
{  int n,m,i,j;
  printf("Enter the no:of rows and no:of columns");
  scanf("%d%d",&n,&m);
int arr[n][m];
  for(i=0;i<n;i++) //for entering the elements to the matrix
for(j=0;j<m;j++)
  { printf("enter the element a%d%d ",i+1,j+1);
scanf("%d",&arr[i][j]);}
 for(i=0;i<n;i++)  //for printing the entered matrix
  { for(j=0;j<m;j++)
{printf("%d ",arr[i][j]);
if(j==m-1)
printf("\n");}
}                            //escape after printing the first row
printf("\n");
printf("The Transpose of the matrix is\n");
{for(i=0;i<m;i++)
 for(j=0;j<n;j++)
  {printf("%d ",arr[j][i]);
if(j==n-1)
printf("\n");
  }
}
return 0;
}
