#include<stdio.h>

int main()
{
	int n,r;
	
	printf("enter an intrger: \n");
	scanf("%d",&n);
	
	while(n>0)
	{
	  r=n%10;
	  switch(r)
	{
	case 1: printf("\nOne");
	break;
	case 2: printf("\ntwo");
	break;
	case 3: printf("\nthree");
	break;
	case 4: printf("\nfour");
	break;
	case 5: printf("\nfive");
	break;
	default: printf("\nWrong input");
    }
    n=n/10;
}

return 0;

}
