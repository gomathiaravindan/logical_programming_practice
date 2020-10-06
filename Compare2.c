#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	int i,j;
	printf("Enter 1st string:");
	gets(s);
	printf("Enter 2nd string:");
	gets(s1);
	if(strlen(s)==strlen(s1))
	{
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]!=s1[i])
			{
				printf("Two strings are not equal!!");
				break;
			}
		}
		if(i==strlen(s))
		{
			printf("Two strings are equal!!");
		}
	}
	else
	{
		printf("Two strings are not equal!!");
	}
}
