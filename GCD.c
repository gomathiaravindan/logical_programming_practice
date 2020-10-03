#include<stdio.h>
int main()
{
	int a,b,i,g;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	for(i=2;i<=a/2,i<=b/2;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	printf("The GCD is: %d",g);
}
