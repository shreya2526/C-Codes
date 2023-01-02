#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("D:\\Programs\\abc.txt","r");
	
	if(fp==NULL)
	{
		printf("File not found");
	}
	else
	{
		printf("File opened in read mode\n");
	}
	
	return 0;
	
}
