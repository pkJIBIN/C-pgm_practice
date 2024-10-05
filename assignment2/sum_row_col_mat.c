#include<stdio.h>
int main()
 { 
    int r,c,i,j;
    printf("Enter the number of row and column of matrix");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<=(r-1);i++){
       for(j=0;j<=(c-1);j++)
             {
		printf("Enter the element a%d%d= "i+1,j+1);
		scanf("%d",&mat[i][j]);
		    } 
       printf("\n");
			   }
for(i=0;i<=(r-1);i++)
    {
       for(j=0;j<=(c-1);j++)
         printf("%d",mat[i][j]);
    }
printf("Enter 1 for selecting the row and 2 for selecting the column");
scanf("%d",sel);
if(sel==1)
  { 
      printf("Enter the row number");
      scanf("%d",&k);
      for(i=1;i<=(c-1);i++)
        for(j=0;j
