#include<stdio.h>
int main()
{
	int n,f=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("The factorial is:%d",f);
}

