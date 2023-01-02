#include <stdio.h>
int main()
{

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

for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

return 0;
}

