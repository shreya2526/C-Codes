#include<stdio.h>
#include<string.h>

int main()
{
 int i, j;
 printf("Enter a string whose pattern is to be created : ");
 char n[50];
 gets(n);
 for (i = 0; n[i] != '\0'; i++)
 {
  for (j = 0; j <= i; j++)
   printf("%c", n[j]);
  printf("\n");
 }
}
