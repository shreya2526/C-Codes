#include<stdio.h>

int main()
{
	FILE* fp=NULL;
	
	fp=fopen("D:/Programs/abc.txt","w");
	
	fputc('H',fp);
	
	fputs("Welcome to my home",fp);
	
	fclose(fp);
	
	return 0; 
}
