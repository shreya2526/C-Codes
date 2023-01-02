#include<stdio.h>

int main(){
	char fname[20],mname[20],sname[20];
	
	printf("enter full name: ");
	scanf("%s %s %s",fname,mname,sname);
	
	printf("Short name: ");
	printf("%c. %c. %s\n",fname[0],mname[0],sname);
	
	return 0;
}

