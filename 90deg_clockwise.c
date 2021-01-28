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
	
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d  ",trans[i][j]);
		}
		printf("\n");
	}
}
