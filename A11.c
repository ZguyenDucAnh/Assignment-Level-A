#include <stdio.h>
#include <math.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A11. nhap so tu nhien n. Tinh n!
//							Neu n = 0 -> n! = 1
//							Neu n > 0 -> n! = n(n-1)(n-2)... .2.1

void giai_Thua(int n, int multi){
	if(n == 0){
		printf("n! = 1");
	}else{
		for(int i = n; i>=1; i--){
			multi *= i;
		}
		
		printf("%d",multi);
	}
}


int main(){
	int n;
	
	printf("Nhap n > 0: "); 	scanf("%d",&n);
	giai_Thua(n,1);
	
	
	return 0;
}
