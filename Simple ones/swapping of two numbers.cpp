#include<stdio.h>
void swap(int,int);

int main()
{
	int a,b,temp;
	
	printf("Enter numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("before swapping two numbers are: \nNum1=%d\nNumm2=%d",a,b);
	
	swap(a,b);
	
}

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("\nAfter swapping values in funcation: \nNum1=%d\nNum2=%d",x,y);
	
}
