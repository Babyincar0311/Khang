#include<stdio.h>
#include<string.h> 
void input(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
}


