#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,n3=0,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
		i++;
	}
}
