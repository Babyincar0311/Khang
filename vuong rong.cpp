#include<stdio.h>
int main() {
	int a;
	printf("nhap do dai canh");
	scanf("%d",&a);
	int b,c;
	for (b=0;b<a;b++){
		for(c=0;c<a;c++){
			if(b==0 || b==a-1 || c==0 || c==a-1){
				printf("* ");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
	
		
	
	
	
	
		

