#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30];
	
	printf("Enter a string: ");
	scanf("%s",s1);
	
	printf("uppercase of string : %s",strupr(s1));
	
	return 0;
}
