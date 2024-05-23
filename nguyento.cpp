#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    int cnt =0;
    printf("nhap n : ");
    scanf("%d",&n);
    do{
    	printf("ko hop le");  
	} 
	while(n<0);
	return 0; 
    if(n<2){
        printf("khong phai la so nguyen to");
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
            cnt++;
            }
        }
        if(cnt==0){
            printf("la so nguyen to");
        }else{
            printf("khong la so nguyen to");
        }
    }
}

// GTLN,GTNN
int n1,max,min,a1;
printf("nhap vao so luwowng phan  tu");
scanf("%d",&n);
printf("nhap pha tu thu 1");
scanf("%d",&a1);
min = a1;
max=a1;

for(int i=1; i<n1; i++){
	int tmp;
	printf("nhap phan tu thu %d",i+1);
	scanf("%d",&tmp);
	if(tmp>max){
		max=tmp;
	}
	if(tmp<min){
		min=tmp;
	}
}
printf("gia tri max:%d , Gia tri min: %d",max min);

