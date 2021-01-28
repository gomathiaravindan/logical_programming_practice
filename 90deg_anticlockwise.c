#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j;
	printf("Enter the rows and columns of the matrix:");
	scanf("%d %d",&m,&n);
	int a[m][n],trans[30][30];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[j][i] = a[i][j];
		}
	}
	
	for(i=m-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",trans[i][j]);
		}
		printf("\n");
	}
}
