#include <stdio.h>

int main(){
	int m=4, n=4, sum=0;
	int arr[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
	
	printf("ma tran:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0; i<m; i++) {
	 	sum+=arr[i][i];
	}
	printf("tong cac phan tu tren duong cheo: %d",sum);
	
	return 0;
}
