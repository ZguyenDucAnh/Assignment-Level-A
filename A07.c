#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A07. Nhap 4 so thuc a,b,c,d. Tim gia tri lon nhat va gan cho bien Max

int main(){
	float a,b,c,d,max;
	
	printf("nhap a: "); scanf("%f",&a);
	printf("nhap b: "); scanf("%f",&b);
	printf("nhap c: "); scanf("%f",&c);
	printf("nhap d: "); scanf("%f",&d);
	max = a;
	if(a>b && a>c && a>d){
		printf("Max: %f",a);
	}else if(b>c && b>d){
		printf("Max: %f",b);
	}else if(c>d){
		printf("Max: %f",c);
	}else{
		printf("Max: %f",d);
	}
	
	return 0;
}