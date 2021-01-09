#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char s[20];
	gets(s);
	char *ptr = s;
	for(i=0;s[i]!='\0';i++)
	{
		ptr++;
	}
	
	for(i = strlen(s);i>=0;i--)
	{
		printf("%c",*ptr--);
	}

}
