#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	(num%2==0)? printf("The number %d is even",num):printf("The number %d is odd",num);
	
	return 0;
}
