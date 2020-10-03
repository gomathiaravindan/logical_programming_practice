#include<stdio.h>
int main()
{
	int n,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	temp%sum==0?printf("Niven(Harshad) number"):printf("Not a niven(harshad) number");
}
