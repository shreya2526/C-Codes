#include<stdio.h>

int main()
{
	int num1, num2,LCM;
	
	printf("Enter two numbwrs: ");
	scanf("%d %d",&num1,&num2);
	
	printf("LCM = %d",LCM(num1,num2));
}

int LCM(int a, int b)
{
	static int m=0;
	
	m=m+b;
	
	if(m%a==0 && m%b==0)
	return m;
	
	return LCM(a,b);
}
