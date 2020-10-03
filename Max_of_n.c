#include<stdio.h>
int main()
{
	int n,max=0,i,a;
	printf("Enter the total numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		{
			if(max<a)
			{
				max=a;
			}
		}
	}
	printf("The maximum of %d numbers is: %d",n,max);
}
