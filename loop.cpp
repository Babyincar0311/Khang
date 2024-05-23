#include<stdio.h>
int main (){
	int a;
	printf("do dai canh la: \n");
	scanf("%d",&a);
	int b,c;
	for(b=0;b<a;b++){
		for(c=0;c<a;c++)
			printf("o ");
		printf("\n");
	}
	return 0;
}

