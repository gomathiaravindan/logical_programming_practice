#include<stdio.h>
int main()
{
	 int n,i,a;
	 float avg,sum=0;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a);
	 	sum+=a;
	 }
	 printf("The average is: %.3f",(sum/n));
}
