#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,delta;
	double x1,x2;
	printf("Nhap a : ");
	scanf("%d",&a);
	printf("Nhap b : ");
	scanf("%d",&b);
	printf("Nhap c : ");
	scanf("%d",&c);
	if(a==0){
		printf("Phuong trinh co dang %dx + %d = 0\n",b,c);
		printf("Phuong trinh co nghiem x = -c/b = -%d/%d = %d",c,b,-c/b);
	}
	if(a!=0){
		printf("Phuong trinh co dang %dx^2 + %dx + %d = 0\n",a,b,c);
		delta=b*b-4*a*c;
		printf("Delta = b^2 - 4ac = %d^2 - 4.%d.%d = %d\n",b,a,c,delta);
		if(delta > 0){
			printf("Phuong trinh co 2 nghiem\n");
			x1 = (-b+sqrt(delta))/(2*a);
			printf("x1 = %.2lf\n",x1);
			x2 = (-b-sqrt(delta))/(2*a);
			printf("x2 = %.2lf\n",x2);	
		}else if(delta==0){
			x1 = -b / (2*a);
			printf("Phuong trinh co nghiem kep\n");
			printf("%.2lf",x1);
		}else{
			printf("Phuong trinh vo nghiem\n");
		}
	}
	return 0;
}
