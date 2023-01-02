#include<stdio.h>


int gcd(int num1, int num2)
{
	if(num2==0)
	return num1;
	
	gcd(num2,num1%num2);
}

int main()
{
	int num1, num2, res;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	
	res=gcd(num1,num2);
	
	printf("\ngcd=%d",res);
	
	return 0;
}

