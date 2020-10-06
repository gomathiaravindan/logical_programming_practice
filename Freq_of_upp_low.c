#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,c1=0,c2=0;
	printf("Enter a string:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			c1++;
		}
			if(s[i]>='a' && s[i]<='z')
		{
			c2++;
		}
	}
	printf("The frequency of uppercase letters:%d\n",c1);
	printf("The frequency of lowercase letters:%d",c2);
}
