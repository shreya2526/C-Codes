#include<stdio.h>

int main()
{
	FILE *ptr;
	int i;
	
	ptr=fopen("D:/Programs/abc.txt","r");
	
	for(i=1;i<=10;i++)
	{
		printf("%c : %d\n",getc(ptr),ftell(ptr));
		
		fseek(ptr,ftell(ptr),0);
		
		if(i==5)
		rewind(ptr);
	}
	
	fclose(ptr);
}
