#include<stdio.h>
#include<string.h>

int main()
{
	int i, flag=0;
	
	char s1[50], s2[50];
	
	printf("Enter 1st string: ");
	scanf("%s",s1);
	
	printf("Enter 2nd string: ");
	scanf("%s",s2);
	
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("same");
	else
	printf("not same");
	
	return 0;
}

