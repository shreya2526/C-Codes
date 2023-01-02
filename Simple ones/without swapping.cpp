#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("before swapping: \nNum1: %d\nNum2: %d",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("After swapping: \nNum1: %d\nNum2: %d",a,b);
	
	return 0;
}
