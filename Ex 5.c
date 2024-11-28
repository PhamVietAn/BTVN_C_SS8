#include <stdio.h>

int main(){
	int m=4, n=3, sum=0;
	int arr[4][3]={{1,2,3},{3,4,5},{5,6,7},{7,8,9}};
	
	printf("ma tran:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	 for (int i = 0; i < m; i++) {
        sum += arr[i][0];
        sum += arr[i][n-1];
    }
    for (int j = 0; j < n; j++) {
        sum += arr[0][j];
        sum += arr[m-1][j];
    }
    
    sum -= arr[0][0]; 
    sum -= arr[0][n-1];
    sum -= arr[m-1][0];
    sum -= arr[m-1][n-1];
	printf("tong cac phan tu tren bien: %d",sum);
	
	return 0;
}
