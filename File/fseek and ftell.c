#include<stdio.h>

int main()
{
	FILE* fp;
	
	fp=fopen("D:/Programs/abc.txt","r");
	
	if(fp==NULL)
	{
		printf("\nCan't open file or file doesn't exist.");
	}
	fseek(fp,0,SEEK_END);
	
	printf("The size of file: %ld bytes",ftell(fp));
	
	fclose(fp);
	
	return 0; 
}
