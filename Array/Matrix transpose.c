#include<stdio.h>

int main()
{
	int a[100][100], b[100][100];
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
	
    printf("\nTranspose of A matrix is: \n\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++){
    		printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
