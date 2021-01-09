#include<stdio.h>
int main()
{
	int n,i,j,del_ele,found=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be deleted:");
	scanf("%d",&del_ele);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==del_ele)
		{
			found=1;
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	if(found==1)
	{
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	}
	else
		printf("Element not found!!");
}
