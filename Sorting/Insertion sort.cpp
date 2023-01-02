#include<stdio.h>
int main(){

   
   int a[100],n,i,j,temp;
   
   printf("Enter number of element: \n");
   scanf("%d",&n);
   
   printf("Enter value into array: \n");
   
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   
   printf("\nDisplay array before sorting: \n");
   
   for(i=0;i<n;i++)
   {
   	printf("%d\t",a[i]);
   }
   
printf("\nDisplay array after sorting: \n");

   for(i=1;i<n;i++)
{
	temp=a[i];
	j=i-1;
	while(temp<a[j] && j>=0)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}

for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

   return 0;
}

