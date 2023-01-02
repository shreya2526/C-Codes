#include<stdio.h>

int main()
{
	int a[100],i,j,small,pos=0,n;
	
	printf("Enter how many elements?: \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter elements for matrix: \n");
		scanf("%d",&a[i]);
	}
	small=a[0];
	
	for(i=1;i<=n;i++)
		if(small>a[i]){
			small=a[i];
			pos=i;
	}
		printf("\nSmallest number: %d, at position: %d\n",small,pos);
		
	return 0;
}
