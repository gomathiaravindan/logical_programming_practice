#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	printf("Enter 1st string:");
	gets(s);
	strcpy(s1,s);
	printf("The copied string is:%s",s1);
}
