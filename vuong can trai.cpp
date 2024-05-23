#include<stdio.h>
int main (){
	int a;
	printf("nhap chieu cao a");
	scanf("%d",&a);
	int b,c;
	for(b=1;b>=a;b++){
		for(c=1;c>=b;c++)
		printf("o ");
		printf("\n");
	}
	return 0;
}
