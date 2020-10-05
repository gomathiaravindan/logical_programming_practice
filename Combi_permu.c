#include<stdio.h>
int factorial(int);
int main()
{
	int n,r,val,val2,val3;
	printf("Enter n and r values:");
	scanf("%d %d",&n,&r);
/*	val = combinations(n);
	val2=combinations(r);
	val3=combinations(n-r);*/
 	printf("The combination value is:%d\n",combinations(n)/(combinations(r)*combinations(n-r)));
	printf("The permutation value is:%d",combinations(n)/combinations(n-r));
}

int combinations(int n)
{
	if(n==0)
	{
		return 1;
	}
	else{
		return n*combinations(n-1);
	}
}
