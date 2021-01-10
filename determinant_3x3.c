#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the row and column of a matrix:");
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i =0 ;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The determinant of matrix is:%d", (a[0][0] * ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) - (a[1][0] * ((a[0][1] * a[2][2]) - (a[0][2] * a[2][1]))) + (a[2][0] * ((a[0][1] * a[1][2]) - (a[1][1] * a[0][2])))));
	
}
