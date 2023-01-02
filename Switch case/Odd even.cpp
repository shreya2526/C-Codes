#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter any number= ");
	scanf("%d",&a);
	
	switch(a%2==0)
	{
		case 1:
		  printf("\nEven");
		    break;
		case 0:
		 printf("\nOdd");
            break;
										 			
	}
	
	return 0;
}
