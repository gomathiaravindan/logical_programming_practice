#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,len;
	printf("Enter 1st string:");
	gets(s);
	len=strlen(s);
	char s1[len];
	  for(i=0;i<strlen(s);i++)
	  {
	  	s1[i]=s[i];
	  }
	  	printf("The copied string is:%s",s1);

}
