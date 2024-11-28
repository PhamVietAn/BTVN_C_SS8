#include <stdio.h>

int main(){
    int arr[]={2,4,8,3,6,3,3,0,2,0,6,2,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int countMax=0,frequent;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count>countMax) {
            countMax = count;
            frequent = arr[i];
        }
    }

    printf("phan tu xuat hien nhieu nhat trong mang la: %d\n",frequent);
    printf("so lan xuat hien: %d\n",countMax);

    return 0;
}

