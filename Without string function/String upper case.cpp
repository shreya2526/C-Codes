#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30];
	int i;
	
	printf("Enter string: ");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]>='a' && s1[i]<='z'){
			s1[i]=s1[i]-32;
		}
	}
	printf("String is %s",s1);
	
	return 0;
}
