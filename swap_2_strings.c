#include<stdio.h>
#include<string.h>
int main()
{
	char s[30], s1[30];
	char *temp, *p,*p1;
	gets(s);
	gets(s1);
	p = s;
	p1 = s1;
	temp = p;
	p = p1;
	p1 = temp;
	
	printf("%s %s",p,p1);
	
}
