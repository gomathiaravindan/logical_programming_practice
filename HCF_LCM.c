#include<stdio.h>
int main()
{
	int a,b,i,g=1,max=0,l,j;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	for(i=2;i<=a/2,i<=b/2;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	printf("The HCF is: %d",g);
	max= a>b?a:b;
	j=max;
    while(1)
	{
		if(j%a==0 && j%b==0)
		{
			l=j;
			break;
		}
		j+=max;
	}
	printf("\nThe LCM is: %d",l);
}
