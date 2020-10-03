#include<stdio.h>
#include<math.h>
int main()
{
	int n,ex,i,res=1;
	printf("Enter 2 numbers:");
	scanf("%d %d",&n,&ex);
	while(ex!=0)
	{
		res=res*n;
		--ex;
	}
	printf("The power is: %d",res);
}

