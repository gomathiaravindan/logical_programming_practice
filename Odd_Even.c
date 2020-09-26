#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%s", n&1==1? "odd":"even");
}
