#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("Enter a string:");
	gets(s);
	printf("\nThe vowels are:");
	for(i=0;i<strlen(s);i++)
	{
		if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u')
		{
			printf("%c",s[i]);
		}
		else{
			continue;
		}
	}
	
}
