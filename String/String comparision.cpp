#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30], s2[30];
	
	printf("Enter 1st string: ");
	scanf("%s",s1);
	printf("Enter 2nd string: ");
	scanf("%s",s2);
	
    if(strcmp(s1,s2)==0)
    {
    	printf("Both strings are equal");
	}
	else
	{
		printf("Two strings are different");
	}
	
	return 0;
}
