#include <stdio.h>

int main() {
    int arr[]={2,4,8,3,6,3,3,0,2,0,6,2,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int countMax=0;
    int indx[100]={0};
    int unique[100], uniqueCount=0;

    for(int i=0; i<n; i++) {
        indx[arr[i]]++;
    }
    for(int i=0; i<n; i++) {
        if (indx[arr[i]]>countMax) {
            countMax=indx[arr[i]];
        }
    }
    printf("cac phan tu xuat hien nhieu nhat trong mang la:\n");
    for(int i=0; i<n; i++) {
        if(indx[arr[i]]==countMax) {
            int print=0;
            for(int j=0; j<uniqueCount; j++) {
                if(unique[j]==arr[i]) {
                    print=1;
                    break;
                }
            }
            if(print!=1) {
                unique[uniqueCount++]=arr[i];
                printf("phan tu: %d, so lan xuat hien: %d\n",arr[i],countMax);
            }
        }
    }

    return 0;
}

