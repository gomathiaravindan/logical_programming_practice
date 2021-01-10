#include<stdio.h>
int main()
{
	int n,i,j,mid,l,h,key,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&key);
	l=0;
	h=n-1;
	while(l<=h)
	{
	
	mid = (l+h)/2;
	
	if(a[mid]==key)
	{
		flag=1;	
		break;
	}
	else if(a[mid] < key)
	{
		l = mid+1;
		
	}
	
	else if(a[mid] > key)
	{
		
		h = mid-1;
	}
}
	if(flag==1)
	{
		printf("The element found!!");
	}
	else
	{
		printf("The element not found!!");
	}
}

