#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,k,n1,n2,n3;
	
	scanf("%d",&n);
	
	for(i = 1;i<=n;i++)
	{
		n1 = 1,n2 = 1,n3 = 1;
		k = 0;
		
		for(j =1;j<=i;j++)
		{
			while(k<i)
			{
				printf("%d ",n2);
				n1 = n2;
				n2= n3;
				n3 = n1+n2;
				k++;
			}
			
		}
		printf("\n");
	}
}
