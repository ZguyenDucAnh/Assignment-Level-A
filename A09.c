#include <stdio.h>
#include <math.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A09. nhap 3 so a,b,c va bien luan pt bac 2: ax^2 + bx +c = 0
int main(){
	double a,b,c, delta, x1,x2;
	printf("\nNhap a: "); 	scanf("%lf",&a);
	printf("\nNhap b: "); 	scanf("%lf",&b);
	printf("\nNhap c: "); 	scanf("%lf",&c);


	delta = pow(b,2) - 4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	
	if(delta > 0){
		printf("\nPT co 2 nghiem pb: \nx1 = %.2lf \nx2 = %.2lf",x1,x2);
	}else if(delta == 0){
		printf("\nPT co nghiem kep: \nx1 = x2 = %.2lf",-b/(2*a));
	}else{
		printf("PT vo nghiem");
	}


	return 0;
}