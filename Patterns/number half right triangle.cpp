#include<stdio.h>

int main()
{
	int i,j,n,k;
	
	printf("How many lines do you want: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=(n-1);j>=i;j--){
			printf(" ");
	    }
		for(k=1;k<=i;k++){
			printf("%d",k);
	    }
		printf("\n");
	}
}
