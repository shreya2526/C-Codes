#include<stdio.h>

int main()
{
	int a,b,big;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	big=(a>b)?(a):(b);
	
	printf("Biggest of %d and %d is %d\n",a,b,big);
	
	return 0;
}
