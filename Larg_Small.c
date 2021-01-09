#include<stdio.h>
int main()
{
	int n,i,j,min=999999,max=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(max < a[i])
		{
			max = a[i];
		}
		if(min >= a[i])
		{
			min = a[i];
		}
	}
	printf("The largest and smallest of an array is: %d %d",max,min);
}
