#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d",a,b);
	
}
