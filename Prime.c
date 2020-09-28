#include<stdio.h>
int main()
{
	int n,count=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	
	}
	count==2?printf("Prime number!!"):printf("Not a prime number!!");

}
