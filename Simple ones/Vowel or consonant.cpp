#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter a letter: ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("Entered character is a vowel");
	}
	else
	{
		printf("Entered character is a consonant");
	}
	
	return 0;
}
