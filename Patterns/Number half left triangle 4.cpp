#include<stdio.h>

int main()
{
	int i,j,n,p=0;
	
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",p++);
		}
		printf("\n");
	}
}
