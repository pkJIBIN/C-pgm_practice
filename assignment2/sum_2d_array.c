#include<stdio.h>


 int main()

 {
int i,j,sum=0,r,c;
printf("Enter the number of rows and columns ");
scanf("%d%d",&r,&c);
int arr[r][c];

for(i=0;i<=r-1;i++)
	for(j=0;j<=c-1;j++){
		printf("Enter the element  a%d%d= ",i+1,j+1);
		scanf("%d",&arr[i][j]);
		}

for(i=0;i<=r-1;i++){
          for(j=0;j<=c-1;j++){
		printf("%d ",arr[i][j]);
 		}
	printf("\n");
	}
for(i=0;i<=(r-1);i++){
	for(j=0;j<=(c-1);j++)
		{
		   sum=sum+arr[i][j];
		   }	
		  }    	
printf("The sum is = %d",sum);

return 0;
}
