#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A02

void Tong_tu_i_n(int sum, int n){
	for(int i = 0; i<n; i++){
		sum += i;
	}
	
	printf("%d",sum);
} 

void Tong_tu_i_n_sole(int sum1, int n){
	for(int i = 0; i<n; i++){
		if(i % 2 != 0){
			sum1 += i;
		}
	}
	printf("%d",sum1);
}

void Tong_tu_i_n_sochan(int sum2, int n){
	for(int i = 0; i<n; i++){
		if(i % 2 == 0){
			sum2 += i;
		}
	}
	printf("%d",sum2);
}

int main(){
	int n;
	printf("Input n: ");
	scanf("%d",&n);
	printf("\nTong cac so nho hon n la: ");
	Tong_tu_i_n(0, n);
	printf("\nTong cac so le nho hon n la: ");
	Tong_tu_i_n_sole(0, n);
	printf("\nTong cac so chan nho hon n la: ");
	Tong_tu_i_n_sochan(0, n);
	return 0;
}

