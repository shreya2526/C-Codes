#include<stdio.h>

int main()
{
  FILE *f;
  f=fopen("D:/Programs/abc.txt","r");
  char str[4];
  
  fgets(str,8,f);
  
  printf("The string is %s\n",str);
  
  fclose(f);
  
  return 0;
}
