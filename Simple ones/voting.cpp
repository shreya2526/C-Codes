#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age>=18)
	printf("you are eligible to vote: ");
	else
	printf("you can not vote");
	
	return 0;
}
