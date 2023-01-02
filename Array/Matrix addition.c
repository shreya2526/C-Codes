#include<stdio.h>

int main()
{
	int a[100][100], b[100][100], c[100][100];
	int i,j,m,n;
	
	printf("How many rows and columns do you want? ");
	scanf("%d %d",&m,&n);
	
	printf("\nEnter the elements for A matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA matrix is: \n\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	printf("%d\t",a[i][j]);
	   }	
	   printf("\n");
	}
	
	printf("\nEnter the elements for B matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nB matrix is: \n\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	printf("%d\t",b[i][j]);
	   }	
	   printf("\n");
	}
	
	printf("\nThe addition is: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
