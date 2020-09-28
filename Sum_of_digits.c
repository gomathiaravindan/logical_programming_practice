#include<stdio.h>
int main()
{
	int n,sum,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("%d",sum);
}
