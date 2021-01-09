#include<stdio.h>
#include<string.h>
int  main()
{
	char s[20];
	char *i,*j;
	gets(s);
	for(i = s,j = s+ strlen(s) - 1;i<j;i++,j--)
	{
		*i = *i ^ *j;
		*j = *j ^ *i;
		*i = *i ^ *j;
	}
	printf("%s",s);
}
