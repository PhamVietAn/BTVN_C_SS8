#include<stdio.h>

int main(){
	
	int n, m=1;
	printf("nhap so nguyen bat ki: ");
	scanf("%d",&n);
	
	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j]=m;
			printf("%d ",arr[i][j]);
			m++;
		}
		printf("\n");
	} 
	
	return 0; 
} 
