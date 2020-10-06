#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	int i;
	printf("Enter 2 strings:");
	gets(s);
	gets(s1);
	(!strcmp(s,s1))?printf("Two strings are equal"):printf("Two strings are not equal");
	
}
