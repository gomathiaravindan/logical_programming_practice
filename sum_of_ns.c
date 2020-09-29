#include<stdio.h>
int main()
{
	int n,i,sum=0,j;
	scanf("%d",&n);
	printf("Enter %d numbers to calculate the sum: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		sum+=j;
	}
	printf("The sum is: %d",sum);
}
