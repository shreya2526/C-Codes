#include<stdio.h>

struct largest{
	int n1,n2,n3;
};

int main(){
	struct largest num;
	int max;
	
	printf("Enter the first number: \n");
	scanf("%d",&num.n1);
	
	printf("Enter the second number: \n");
	scanf("%d",&num.n2);
	
	printf("Enter the third number: \n");
	scanf("%d",&num.n3);
	
	max=(num.n1>num.n2)?((num.n1>num.n3)?num.n1:num.n3):((num.n2>num.n3)?num.n2:num.n3);
	
	printf("The largest number is %d\n",max);
	
	return 0;
}
