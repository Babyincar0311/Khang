#include<stdio.h>
#include<math.h>
int main ()
{
	//giai pt bac 2 de
	int a,b,c;
	float d,x1,x2,g;
	printf("nhap a di ban oi");
	scanf("%d",&a);
	printf("nhap b di ban oi");
	scanf("%d",&b);
	printf("nhap c di ban oi");	
	scanf("%d",&c);
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	g=-c/b;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("vo so nghiem");
			}
			else{
				printf("vo nghiem");
				}
	
		
	}
	else{
		printf("x=%.2f",g);
	}
		
		}else{
		 if(d<0)
			{
				printf("vo nghiem");}
			else if(d==0){
				printf("x=%.2f",(float)-b/2*a);
			}
		else{
			printf("pt co 2 nghiem x1, x2 = %.2f, %.2f",x1,x2);
		}
			}
	}
	
	

