#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d %d",&r,&c);
	
	int matrix[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int transpose[c][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
}
