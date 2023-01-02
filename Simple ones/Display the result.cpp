#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter ypur marks: ");
	scanf("%d",&marks);
	
	if(marks>75)
	{
		printf("You got Distinction!");
	}else if(marks>=60 && marks<75)
	{
		printf("You got 1st Division");
	}
	else if(marks>=50 && marks<60)
	{
		printf("You got 2nd Division");
	}
	else if(marks>=40 && marks<50)
	{
		printf("You got 3rd Division");
	}
	else if(marks<40)
	{
		printf("Fail\nBetter luck next time");
	}
	
	return 0;
}
