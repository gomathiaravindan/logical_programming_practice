#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,count =0,k=0;
	int count1 = 0;
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr + i);
		if(arr[i] < 0)
		{
			count++;
		}
	}
	
	if((count & 1)!=1)
	{
		printf("[");
		for(i=0;i<n;i++)
		{
			if(arr[i]!=0)
				printf("%d ",arr[i]);
		}
		printf("]");
	}
	
	else
	{
		for(i = 0;i<n;i++)
		{
			for(j = i+1;j<= n-1;j++)
			{
				if(arr[i] < arr[j])
				{
					arr[i] = arr[i] ^ arr[j];
					arr[j] = arr[j] ^ arr[i];
					arr[i] = arr[i] ^ arr[j];
				}
			}
		}
	/*	for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		*/
		for(i = 0;i<=n-count;i++)
		{
			if(arr[i] > 0)
			{
				printf("%d ",arr[i]);
			}
		}
		
	
				for(j = k;j<=count-2;j++)
				{
					printf("%d ",arr[i-1]);
					i++;
				}
			
		}
		
	}

