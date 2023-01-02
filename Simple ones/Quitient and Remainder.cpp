#include<stdio.h>

int main()
{
	int a,b;
	float quotient, remainder;
	
	printf("Enter two integer: ");
	scanf("%d %d",&a,&b);
	
	quotient =a/b;
	remainder=a%b;
	
	printf("Quotient=%.2f\n",quotient);
	printf("Remainder=%.2f\n",remainder);
	
	return 0;
}
