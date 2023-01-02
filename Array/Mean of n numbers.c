#include<stdio.h>

int main()
{
	int a[50],i,n;
	float mean=0,sum=0;
	
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	printf("\nEnter the numbers: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		mean = sum/n;
	}
	printf("\nMean of entered numbers are: %.2f",mean);
	
	return 0;
}
