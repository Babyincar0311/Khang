#include<stdio.h>

void instr(char str[][1005],int n){
	for(int i=0;i<n;i++){
		printf("nhap vao chuoi thu %d",i+1);
		scanf("%s",&str[i]);
	}
}
int main(){
	int n ;
	printf("nhap so chuoi string:\n");
	scanf("%d",&n);
	instr(str,n);	
}
