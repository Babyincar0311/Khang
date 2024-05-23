#include<stdio.h>
int main() 
{
	//giai pt bac 1
	int a,b;
	float c;
	printf("nhap a :");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	c=-b/a;
	if(a==0){
		if(b==0){
		printf("pt vo so nghiem hehe");
	}else{
		printf("pt vo nghiem huhu");
	}
}else{
	printf("%f",c);
}
}
