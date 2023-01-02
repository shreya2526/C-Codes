#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	int *ptr;
	
	printf("Enter the size of the array you want to create: \n");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter the value of this array: \n");
		scanf("%d",&ptr[i]);
	}
	for(i=1;i<=n;i++)
	
	printf("The value of this array is %d\n",i,ptr[i]);
	
	free(ptr);
	
	return 0;
}
