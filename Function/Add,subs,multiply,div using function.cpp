#include<stdio.h>

int sum(int,int);
int substract(int,int);
int multiply(int,int);
float div(int,int);

int main()
{
	int a,b,c,m,s;
	float d;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	c=sum(a,b);
	s=substract(a,b);
	m=multiply(a,b);
	d=div(a,b);
	
	printf("Addition: %d\n",c);
	printf("Substraction: %d\n",s);
	printf("Multiplication: %d\n",m);
	printf("Division: %.2f\n",d);
	
	return 0;
}

int sum(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

int substract(int x, int y)
{
	int w;
	w=x-y;
	return w;
}
int multiply(int x, int y)
{
	int p;
	p=x*y;
	return p;
}

float div(int x, int y)
{
	float k;
	k=(x/(float)y);
	return k;
}

