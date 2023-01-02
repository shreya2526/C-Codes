#include<stdio.h>

int main()
{
	int a[50],i,j,n,big,pos=0;
	
	printf("Enter how many elements in array?: ");
	scanf("%d",&n);
	
	printf("\nThe elements are: ");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=1;i<=n;i++){
		if(big<a[i])
		big=a[i];
		pos=i;
	}
	printf("\nBiggest elements is %d at %d position",big,pos);
	
	return 0;
}
