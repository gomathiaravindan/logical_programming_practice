#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,count=0,rem,arm,num;
	scanf("%d",&n);
	temp=n;
	num=n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	/*printf("%d",count);*/
	while(temp!=0)
	{
		rem=temp%10;
		arm = arm+pow(rem,count);
		temp=temp/10;
	}
	num==arm?printf("Armstrong number"):printf("Not an Armstrong number");
	
}
