#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n,i,a,sum=0;
	scanf("%d",&n);
	
	p=(int*)malloc(n * sizeof(int));
	if(p==NULL)
	{
		printf("Memory is not allocated!!");
	}
	
	else{
		printf("Enter %d numbers: ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			p[i]=a;
			sum+=p[i];
		}
	}
	printf("The sum of the given array is: %d",sum);
	free(p);
}
