#include<stdio.h>

int main (){
	//diem trung binh cua may thang ngu
	float x,y,z,dtb;
	printf("nhap diem trung binh ki 1 :");
	scanf("%f",&x);
	printf("nhap diem trung binh ki 2 :");
	scanf("%f",&y);
	printf("nhap diem trung binh ki 3 :");
	scanf("%f",&z);
	dtb=(x+y+z)/3;
 	
 	if((x>10)||(y>10)||(z>10)){
 		printf("ko ko le");
	}
	else if(dtb>=9.0){
		printf("gioi");
	}
	else if(dtb>=7&&dtb<9){
		printf("kha");
	}
	else if(dtb>=5&&dtb<7){
		printf("ngu");
	}
	else if(dtb<5){
		printf("rat ngu");
	}

}

