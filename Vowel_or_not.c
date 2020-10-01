#include<stdio.h>
#include<string.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(tolower(a)=='a' ||tolower(a)=='e'||tolower(a)=='i'||tolower(a)=='o'||tolower(a)=='u')
	{
		printf("The alphabet is a vowel!!");
	}
	else{
		printf("The alphabet is not a vowel!!");
	}
}
