#include<stdio.h>

struct student
{
	char name[20];
	int roll;
};

int main()
{
	struct student s1;
	
	printf("Enter the name of student: ");
	scanf("%s",s1.name);
	
	printf("Enter the roll of student: ");
	scanf("%d",&s1.roll);
	
	printf("%s\n",s1.name);
	printf("%d",s1.roll);
	
	return 0;
}
