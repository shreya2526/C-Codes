#include<stdio.h>

int main()
{
	int n,r;
	
	printf("Enter an integer: \n");
	scanf("%d",&n);
	
	while(n>0)
	{
	  r=n%10;
	  switch(r)
	{

	case 1: printf("\nSunday");
	break;
	case 2: printf("\nMonday");
	break;
	case 3: printf("\nTuesday");
	break;
	case 4: printf("\nWednesday");
	break;
	case 5: printf("\nThursday");
	break;
	case 6: printf("\nFriday");
	break;
	case 7: printf("\nSaturday");
	break;
	default: printf("\nWrong input");
    }
    n=n/10;
}

return 0;

}
