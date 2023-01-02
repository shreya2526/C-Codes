#include<stdio.h>

int main()
{
	char c;
	FILE *fp;
	
	fp = fopen("D:/Programs/abc.txt","w");
	
	if(fp==NULL)
	printf("Can not open the file");
	
	printf("Enter input: \n");
	while((c=getchar())!=EOF)
	putc(c,fp);
	
	fclose(fp);
	

	
}
