#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,rem,temp=0;
	printf("Enter a binary value:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=(rem*pow(2,temp));
		temp++;
		n/=10;
		
	}
	printf("The decimal value is:%d",sum);
	
}
