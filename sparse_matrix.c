#include<stdio.h>
int main()
{
	int m,n,i,j,count=0;
	printf("Enter the rows and columns of the matrix:");
	scanf("%d %d",&m,&n);
	int A[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
			if(A[i][j]==0)
			{
				count++;
			}
		}
	}
	
	count > (m+n)/2 ? printf("The matrix is spared!!") : printf("The matrix is not sparsed!!");
	 
}
