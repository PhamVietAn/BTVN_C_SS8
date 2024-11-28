#include <stdio.h>

int main(){
	
	int arr[4][3]={{1,2,3},{3,4,5},{5,6,7},{7,8,9}};
    for(int i=3;i>=0; i--){
        for(int j=2; j>=0; j--){
            printf("%d ",arr[i][j]);
        }
    }
    
    return 0;
}

