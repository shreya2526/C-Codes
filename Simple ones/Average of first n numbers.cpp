#include<stdio.h>

int main()
{
	int n,count=1;
	float x, av,sum=0;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(count<=n)
	{
		printf("Enter the %d number?",count);
		scanf("%f",&x);
		sum+=x;
		++count;
	}
	
	av = sum/n;
	
	printf("\nThe average is %f\n",av);
}
