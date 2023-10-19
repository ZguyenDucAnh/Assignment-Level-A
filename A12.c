#include <stdio.h>
#include <math.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A12. Su dung thuat toan Euclid de tim UCLN cua 2 so nguyen a va b

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	int b;
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("UCLN cua %d va %d la: ",a,b);
	int r;
	while(b != 0){
		r = a%b;
		a = b;
		b = r;
	}
	
	printf("%d",a);
	
	return 0;
}
