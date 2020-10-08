#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	int i,j;
	printf("Enter a string:");
	gets(s);
	for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
	{
	 	if(s[i]!=s[j])
	 	{
	 		printf("The string is not a palindrome!!");
	 		break;
		 }
	
	}
	if(i==strlen(s) || i==j)
	{
		printf("The string is a palindrome!!");
	}
}
