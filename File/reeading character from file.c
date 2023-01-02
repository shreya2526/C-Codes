#include<stdio.h>

int main()
{
  FILE *f;
  f=fopen("D:/Programs/abc.txt","r");
  char c=fgetc(f);
  
  printf("The first character which I am reading is %c\n",c);
  
  c=fgetc(f);
  
  printf("The second character which I am reading is %c\n",c);
  
  fclose(f);
  
  return 0;	
}
