#include<stdio.h>
int main()
{
	int roll_no;
	float s1,s2,s3;
	float avg;
	printf("Give the roll no:");
	scanf("%d",&roll_no);
	printf("Give the marks for three subjects:");
	scanf("%f %f %f",&s1,&s2,&s3);
	printf("The total marks: %.0f",s1+s2+s3);
	avg = (s1+s2+s3)/3;
	printf("\nThe average mark is: %.2f\n",avg);
	 if(avg>=90)
	 {
	   printf("A grade\n");
	}
   else if(avg>=80 && avg<90)
			printf("B grade\n");
			
   else if(avg>=70 && avg<80)
			printf("C grade\n");
		
	else if(avg>=60 && avg<70)
			printf("D grade\n");
			
	else if(avg>=35 && avg<60)
			printf("E grade\n");
		
	else
		printf("Fail\n");
			
	}
