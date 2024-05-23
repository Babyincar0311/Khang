#include<stdio.h>
int main () {
	int a;
	printf("Vui long nhap so nguyen a; ");
	scanf("%d" , &a);
	printf("Gia tri cua a: %d\n", a);
// float

	float f;
	printf("Vui long nhap vao so f:");
	scanf("%f" , &f);
	printf("Gia tri cua f : %f\n",f);
	printf("Gia tri cua f : %.2f\n",f);

	getchar();
	char c;
	printf("vui long nhap vao ky tu bat ki: ");
	scanf("%c", &c);
	printf("Ky tu c: %c\n", c);
	
	//condition
	if (a>10)
{
	printf("Gia tri a>10\n"); 
  	}
	switch(a) {
	
		case 1 :
	
	        printf("Giai pt bac 1");
		    break;
		case 2 :
		    printf("Giai pt bac 2");
		    break;
		case 3 :
		    printf("Giai pt bac 3");
			break;    
		 default:
		 printf("deo co pt");
		 break; 
		     
		   
	
		
	}
}
