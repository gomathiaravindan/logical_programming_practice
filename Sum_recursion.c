#include<stdio.h>
void sum(int,int);
int main()
{
	int n,s=0;
	scanf("%d",&n);
	sum(n,s);
}
void sum(int n,int s)
{
	if(n!=0)
	{
		 s+=n%10;
		return sum(n/10,s);
	}
	printf("The sum is : %d",s);
}
