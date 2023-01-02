#include<stdio.h>

int main()
{
	FILE* fp=NULL;
	
	fp=fopen("D:/Programs/abc.txt","a+");
	
	fputs(".Take a seat",fp);
	
	fclose(fp);
	
	return 0; 
}
