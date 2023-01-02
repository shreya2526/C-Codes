#include<stdio.h>

int main()
{
	int num1, num2, GCD, LCM, count=1,small;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	
	
	small=(num1,num2)?num1:num2;
	
	while(count<=small)
	{
		if(num1%count == 0 && num2%count == 0)
		{
			GCD=count;
		}
		count++;
		
	}
	
	LCM = (num1*num2)/GCD;
	
	printf("GCD is: %d\nLCM is: %d",GCD,LCM);
	
	return 0;
}
