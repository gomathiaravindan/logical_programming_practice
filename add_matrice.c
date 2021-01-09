#include<string.h>
int main()
{
	int m,n,p,q,A[30][30],B[30][30],i,j;
	printf("Enter the number of rows and columns of first matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter the number of rows and columns of second matrix:");
	scanf("%d %d",&p,&q);
	int C[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
		for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("The 2 matrices are:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	if(m==p && n==q)
	{
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j] = A[i][j]+B[i][j];
			}
			printf("\n");
		}
	}
	else
	{
		printf("The addition of matrice cannot be done!!\n\n");
	}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
}
