#include<stdio.h>

int main()
{
	int a,b,c, choice;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("\nMenu: ");
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\nEnter choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: c=a+b;
		printf("\nResult of addition is %d",c);
		break;
		
		case 2: c=a-b;
		printf("\nResult of Substraction is %d",c);
		break;
		
		case 3: c=a*b;
		printf("\nResult of Multiplication is %d",c);
		break;
		
		case 4: c=a/b;
		printf("\nResult of Division is %d",c);
		break;
		
		default: printf("\nInvalid choice");
	}
	
	return 0;
}
