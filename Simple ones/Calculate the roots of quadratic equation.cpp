#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,D;
	float x1,x2;
	
	printf("Enter of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	D=b*b-4*a*c;
	
	if(D>0)
	{
		if(D>0)
		{
			x1=(-b+(sqrt(D)))/2*a;
			x2=(-b-(sqrt(D)))/2*a;
			
			printf("x1= %f, x2=%f",x1,x2);
		}
		else
		{
			x1=x2=-b/2*a;
		}
	}
	else
	{
		printf("Roots are imaginary");
	}
	
	return 0;
}

