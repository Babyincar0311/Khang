#include<stdio.h>
int main(){
printf("dao nguoc mang 1 chieu\n");
int n,temp;
printf("nhap n = ");
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
printf("arr1[%d]=",i+1);
scanf("%d",&array[i]);
}
for(int i = 0; i < n; i++){
for(int j = i; j < n; j++){
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
for(int i = 0; i<n; i++){
printf("%d ", array[i]);
}
} 
