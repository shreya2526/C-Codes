#include<stdio.h>

int fib(int n);

int main()
{
	int i,num;
	
	printf("Enter the number of terms: ");
	scanf("%d",&num);
	
	printf("\nFibonacci sequence for %d terms is: ",num);
	
	for(i=0;i<num;i++)
	printf("%d ",fib(i));
	
	return 0;
}

int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(fib(n-1)+fib(n-2));
}
