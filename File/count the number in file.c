#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch, no_of_char=0, no_of_line=1;
	FILE *fp;
	fp=fopen("D:/Programs/abc.txt","r");
	
	if(fp==NULL)
	{
		printf("File not found");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch!=' ' || ch!='\n')
		{
			no_of_char++;
		}
		if(ch=='\n')
		{
			no_of_line++;
		}
		
   }
	if(no_of_char>0)
	{
	printf("Total number of character: %d\nTotal no of Line: %d",no_of_char,no_of_line);
   }
   else
   {
    printf("Empty file");
   }
   fclose(fp);
	
	return 0;
}
