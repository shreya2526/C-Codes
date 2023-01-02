#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[50];
	int i;
	
	printf("Enter string: ");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++);
	printf("Length of string is %d",i);
}
