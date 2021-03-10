#include<stdio.h>
#include<string.h>
int main()
{
	char s[40],res[30],k=0;
	gets(s);
	int i;
	for(i = 0 ;s[i]!= '\0';i++)
	{
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			res[k] = s[i];
			k++;
		}
	}
	
	strcpy(s,res);
	k = 0;
	
	printf("%s",s);
}
