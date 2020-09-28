#include<stdio.h>
int main()
{
	int n,rem,rev;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=sum*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}
