#include<stdio.h>

int main()
{
  FILE *f;
  f=fopen("D:/Programs/abc.txt","r");
  char c=fgetc(f);
  
  while((c=fgetc(f))!=EOF)
{
	printf("%c",c);
}

 return 0;
 
 fclose(f);
}
