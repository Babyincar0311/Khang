#include<stdio.h>
int main(){
	int e;
	printf("nhap so phan tu");
	scanf("%d",&e);
	int arr[e]=("%d",&e);
	int a;
	
	printf("tat ca cac phan tu theo chieu dao nguoc :\n");
	for(a=e-1;a>=0;a--){
		printf("%d\n",arr[a]);
	}
}
	
