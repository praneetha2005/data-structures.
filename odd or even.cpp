#include<stdio.h>
int main(){
	int n,arr[n],i;
	printf("Enter the no of elements in the array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The even numbers are:\n");
	for(i=0;i<n;i++){
		if(arr[i]%2==0)
		printf("%d\n",arr[i]);
	}
	printf("The odd numbers are:\n");
	for(i=0;i<n;i++){
		if(arr[i]%2>0)
		printf("%d\n",arr[i]);
	}
	return 0;
}

