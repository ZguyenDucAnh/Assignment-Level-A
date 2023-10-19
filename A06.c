#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A06. Liet ke cac so tu nhien be hon n va chia cho 3 thi du 1

void list_number_and_chiahet_3(int n){
	printf("Cac so chia het cho 3 va du 1 la: ");
	for(int i = 0; i<n; i++){
		if(i % 3 == 1){
			printf("%5d",i);
		}
	}
}


int main(){
	int n;
	printf("input n: "); scanf("%d", &n);
	list_number_and_chiahet_3(n);	

	return 0;
}


