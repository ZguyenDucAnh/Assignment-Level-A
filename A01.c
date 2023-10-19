#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//			Tinh tong S = 1 + 1/2 + 1/3 + ... + 1/n

int main(){
	int n; 
	printf("Input integer: "); 	scanf("%d", &n);
	
	float sum = 0;
	
	for(int i = 1; i<=n; i++){
		sum += (1.0/i);
	}
	printf("\nTong S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/%d: ",n);
	printf("%.2f",sum);
	
}