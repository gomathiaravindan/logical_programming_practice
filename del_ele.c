#include<stdio.h>
int main()
{
	int n,i,j,del_ele;
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
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
}
