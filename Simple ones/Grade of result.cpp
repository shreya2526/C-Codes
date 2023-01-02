#include<stdio.h>

int main()
{
	int i,n,marks=0,a[100];
	float avg;
	
	printf("How mant subjects do you have: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Enter your marks: ");
		scanf("%d",&a[i]);
		marks+=a[i];
	}
	
	avg=marks/n;
	
	printf("Marks is: %d\nAverage is: %f",marks,avg);
	
	if(avg>=75)
	{
		printf("\nYou got DISTINCTION!");
	}
	else if(avg>=60)
	{
		printf("\nYou got 1st DIVISION");
	}
	else if(avg>=50)
	{
		printf("\nYou got 2nd DIVISION");
	}
	else if(avg>=40)
	{
		printf("\nYou got 3rd DIVISION");
	}
	else
	{
		printf("\nFAIL\nBetter luck next time");
	}
	
	return 0;
}
