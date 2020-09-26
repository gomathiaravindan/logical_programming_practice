#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	d = b * b - 4 * a * c;
	if(d<0)
	{
		double real= -b/(2*a);
		double img= sqrt(-d)/(2*a);
		printf("root 1 : %.2lf + i%.2lf",real,img);
		printf("\nroot 2 :%.2lf - i%.2lf",real,img);
	}
	else if(d>0)
	{
		x1 = -b/(2*a) + sqrt(d)/(2*a);
		x2 = -b/(2*a) - sqrt(d)/(2*a);
		printf("\nroot 1: %.2lf",x1);
		printf("\nroot 2: %.2lf",x2);
	}
	else{
		x1=x2= -b/(2*a);
		printf("\nroot 1: %.2lf",x1);
		printf("\nroot 2: %.2lf",x2);
	}
}
