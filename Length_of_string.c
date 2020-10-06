#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter a string:");
	gets(s);
	printf("The length of the string is:%d",strlen(s));
}
