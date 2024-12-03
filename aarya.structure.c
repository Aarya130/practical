#include <stdio.h>

struct student
{
	int r_no, day, month, year, class_no, admission_year;
	char name[50], address[100], email[50];
	float percent;
};

int main()
{
	struct student s[10];

	for(int i = 0; i < 10; i++)
	{
		printf("\nEnter the following details of student %d",i+1);
		printf("\nEnter name, roll no and class: ");
		scanf("%s %d %d",&s[i].name ,&s[i].r_no ,&s[i].class_no);
		printf("\nEnter the percentage: ");
		scanf("%f",&s[i].percent);
		printf("\nEnter date of birth:");
		printf("\nEnter day, month, year: ");
		scanf("%d %d %d",&s[i].day ,&s[i].month ,&s[i].year);
		printf("\nEnter admission year: ");
		scanf("%s",&s[i].admission_year);
		printf("\nEnter address: ");
		scanf("%[^\n]%c",&s[i].address);
		printf("\nEnter the email id: ");
		scanf("%s",&s[i].email);
	}

	printf("Std. No.\tName\tRoll No.\tClass-no\tPercent\tDOB\tAdmission Year\tAddress\tEmail ID");

	for(int i = 0; i < 10; i++)
	{
		printf("\n%d.\t%s\t%d\t%d\t%f\t%d/%d/%d\t%d\t%s\t%s",i+1,s[i].name,s[i].r_no,s[i].class_no,s[i].percent,s[i].day,s[i].month,s[i].year,s[i].admission_year,s[i].address,s[i].email);
	}
}
