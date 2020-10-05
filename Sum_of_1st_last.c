#include<stdio.h>
int main()
{
	int n,temp,count=0,sum=0,count1=0,t,sum1=0,sec;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	t=n;
	while(n!=0)
	{
		count++;
		n/=10;
	}
   while(temp!=0)
   {
   	 count1++;
   	 if(count1==1 || count1==count)
		{
			sum=sum+temp%10;
		}
		temp/=10;
   }
	printf("The sum of 1st and last digit is:%d",sum);

printf("\n");
printf("-----------------------------------------------");

printf("\nAnother way to solve this problem\n");

sum1=t%10;

while(t>0)
{
	sec=t%10;
	t/=10;	
}
printf("The sum of first and last digit is:%d",sum1+sec);

}
