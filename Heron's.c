#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float s,area;
	printf("Enter the sides of a triangle:");
	scanf("%f %f %f",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s *(s-a)*(s-b)*(s-c));
	printf("The area of a triangle is:%.3f",area);
}
