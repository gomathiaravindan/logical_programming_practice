#include<stdio.h>
int main()
{
	int a,b,i,sum=0,sum1=0;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum+=i;
		
		}
	}
	for(i=1;i<b;i++)
	{
		if(b%i==0)
		{
			sum1+=i;
		
		}
	}
	if(sum==b && sum1==a)
	{
		printf("The 2 numbers are amicable numbers!!");
	}
	else{
		printf("The 2 numbers are not amicable numbers!!");
	}
}
