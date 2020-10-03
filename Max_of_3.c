#include<stdio.h>
int main()
{
	int a,b,c,max,max1;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?a:b;
	max1 = c>max?c:max;
	printf("The maximum of 3 numbers is: %d",max1);
}
