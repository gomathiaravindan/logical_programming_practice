#include<stdio.h>
int main()
{
	int n,i,j,a[20];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int pos;
	printf("Enter the position of an element to be inserted:");
	scanf("%d",&pos);
	int ele;
	printf("Enter an element to be inserted:");
	scanf("%d",&ele);
	n+=1;
	for(i=n;i>=pos-1;i--)
	{
		if(i==pos-1)
		{
			a[i] = ele;
			break;
		}
		
		else
		{
			a[i] = a[i-1];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
