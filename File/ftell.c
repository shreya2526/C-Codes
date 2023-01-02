#include<stdio.h>

int main()
{
	FILE *fp;
	char ch, str[50];
	fp=fopen("D:/Programs/abc.txt","r");
	
	if(fp==NULL)
	{
		printf("File doesn't exist");
	}
	
	printf("%d",ftell(fp));
	
	//ch=fgetc(fp);
	
	fscanf(fp,"%s",str);
	printf("\n%s",str);
	
	fseek(fp,0,SEEK_END);
	printf("\n%d",ftell(fp));
	
	fclose(fp);
	
	return 0;
}
