#include<stdio.h>

int main()
{
	FILE* fp;
	char str[50],ch;
	fp=fopen("D:/Programs/abc.txt","r");
	
	if(fp==NULL)
	{
		printf("\nCan't open file or file doesn't exist.");
	}
	fseek(fp,6,SEEK_SET);
	ch=fgetc(fp);
	printf("%c",ch);
	
	fseek(fp,-3,SEEK_CUR);
	ch=fgetc(fp);
	printf("\n%c",ch);
	
	fseek(fp,-3,SEEK_END);
	ch=fgetc(fp);
	printf("\n%c",ch);
	
	fclose(fp);
	
	return 0;
	
}
