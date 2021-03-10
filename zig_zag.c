#include<stdio.h>
int main()
{
	int r,c,sum,i,j;
	
	printf("Enter the row and column of a matrix:");
	scanf("%d %d",&r,&c);
	int matrix[r][c];
	for(i = 0;i<r;i++)
	{
		for(j = 0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	sum = matrix[1][1];
	
	for(i=0;i<c;i++)
	{
		sum= sum + matrix[0][i];
	}
	
	for(j=0;j<c;j++)
	{
		sum = sum + matrix[c-1][j];
	}	
	
	printf("%d",sum);
	
}
