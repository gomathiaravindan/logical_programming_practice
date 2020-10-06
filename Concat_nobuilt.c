#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	int i,j;
	printf("Enter a string:");
	gets(s);
	printf("\nEnter a another string:");
	gets(s1);
    i=strlen(s);
    for(j=0;j<strlen(s1);j++)
    {
    	s[i]=s1[j];
    	i++;
	}
	printf("\nThe concatinated string:%s",s);
}
