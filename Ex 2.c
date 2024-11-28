#include <stdio.h>

int main(){
    int n, count = 0;
    int arr[4][3] = {{1, 3, 5}, {6, 7, 9}, {12, 24, 30}, {32, 40, 51}};
    
    printf("nhap vao 1 phan tu bat ki co trong mang: ");
    scanf("%d", &n);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (n == arr[i][j]) {
                printf("phan tu %d co trong mang\nvi tri: hang %d, cot %d\n", n, i + 1, j + 1);
                count = 1;
                break;
            }
        }
        if(count==1){
            break;
        }
    }
    
    if (count!=1) {
        printf("phan tu %d khong ton tai", n);
    }

    return 0;
}

