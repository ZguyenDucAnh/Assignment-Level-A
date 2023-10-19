#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A04. Tinh tong cac so tu nhien be hon n va khong chia het cho 7

void Tong_S(int sum, int n, int i){
	for(i = 0; i<n; i++){
		if(i % 7 != 0){
			sum += i;
		}
	}
	printf("\nSum: %d",sum);
}


int main(){
	int n;
	printf("Input n: "); 	scanf("%d",&n);
	
	printf("\nTong cac so tu nhien be hon n va khong chia het cho 7: \n");
	Tong_S(0,n,0);
	
	return 0;
}



