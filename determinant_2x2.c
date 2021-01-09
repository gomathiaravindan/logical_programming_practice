#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter a row and column of a matrix:");
	scanf("%d %d",&m,&n);
	int a[m][n];
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
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("The determinant of a matrix is:%d", (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]));

	
}
