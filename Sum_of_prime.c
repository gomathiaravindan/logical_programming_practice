#include<stdio.h>
int main()
{
	int n,count=0,i,j,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			sum+=i;
		}
		
	}
	printf("The sum of prime numbers is: %d",sum);
}
