#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	printf("The length of a string is:%d",i);
}
