#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("Enter a string in uppercase:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
	printf("The lowercase string is:%s",s);
}
