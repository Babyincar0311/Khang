#include<stdio.h>
int main(){
	int n;
	printf("Nhap n so phan tu cua mang:\n");
	scanf("%d",&n);
	int arr[n];
	printf("nhap so phan tu trong mang\n");
	for(int i=0;i<n;i++){	
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]<arr[j]){
				int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
				}
				
			}
		}
		for(int i=n-1;i>=0;i--) {
        printf(" sap xep giam dan %d\n ",arr[i]);
	}
		printf("\n");
		printf("gia tri max: %d\n",arr[n-1]);//day la bai 2 cau 1
		printf("gia tri min: %d\n",arr[0]);
		
		return 0;
	}
	
    

