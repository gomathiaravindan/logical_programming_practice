#include<stdio.h>
int main()
{
	int a,b;
	int *p1,*p2,*temp;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	printf("Two numbers before swapping: %d %d\n",a,b);
	p1=&a;
	p2=&b;
	temp = p1;
	 p1 = p2;
	 p2= temp;
	printf("Two number after swapping: %d %d",*p1,*p2);
}
