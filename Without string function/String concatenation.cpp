#include<stdio.h>
#include<string.h>

int main()
{
	int i, l1, l2;
	char s1[100], s2[50];
	
	printf("Enter 1st string: ");
	scanf("%s",s1);
	printf("Enter 2nd string: ");
	scanf("%s",s2);
	
	l1=strlen(s1);
	l2=strlen(s2);
	
	for(i=0;i<=l2;i++)
	{
		s1[l1+i]=s2[i];
	}
	printf("String after concatenation: %s\n",s1);
	
	return 0;
}
