#include<stdio.h>

int main(){

    int  array[100],n,i,j,temp;
	
	printf("enter no of elements: \n");
	scanf("%d",&n);
	
	printf("Enter value into array: \n");
	
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
    } 
	 
	printf("\nDisplay array before sorting: \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	
	printf("\nDisplay array after sorting \n");
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	
	
   return 0;
}


