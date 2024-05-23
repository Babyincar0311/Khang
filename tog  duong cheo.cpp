#include<stdio.h>
int main(){
printf("tong duong cheo!\n");
int m, n ;
printf("nhap n = ");
scanf("%d",&n);
printf("nhap m = ");
scanf("%d",&m);
int a[n][m];
//input
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
printf("a[%d][%d]=",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
//tong
int sum=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(i==j){
sum+=a[i][j];
}
}
}
printf("tong la : %d ",sum);
}
