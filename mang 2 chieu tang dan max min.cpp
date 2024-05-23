#include<stdio.h>

int main(){
    int n,m;
    printf("Nhap vao so hang cua mang: ");
    scanf("%d", &n);
    printf("Nhap vao so cot cua mang: ");
    scanf("%d", &m);
    int arr[n][m];
    //nhap vao so phan tu cua mang 2 chieu
    for(int i = 0; i<n;i++){
        for(int j = 0; j< m; j++){
            printf("\nNhap phan tu a[%d][%d] : ", i, j);
             scanf("%d", &arr[i][j]);
        }
    }
    //in ra mang vua nhap
    printf("Mang 2 chieu vua nhap la: \n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }

    // chuyen mang 2 chieu thanh 1 chieu
    int b[nm];
    for(int i = 0; i<nm; i++){
        b[i] = arr[i/m][i%m];
    }

    printf("Mang sau khi chuyen doi: ");
    for(int i = 0; i<nm; i++){
        printf("%d ", b[i]);
    }
    //sap xep noi bot
        for(int i = 0; i<nm; i++){
        for(int j = i; j<nm; j++){
            if(b[i]>b[j]){
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nMang vua sap xep theo kieu noi bot: ");
    for(int i = 0; i<nm; i++){
        printf("%d ", b[i]);
    }

    printf("");
}
