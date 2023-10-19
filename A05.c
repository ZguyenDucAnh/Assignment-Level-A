#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A05. kiem tra tam giac


int main(){
	int a,b,c;
	printf("Input a: "); scanf("%d",&a);
	printf("Input a: "); scanf("%d",&a);
	printf("Input a: "); scanf("%d",&c);
	
	if(a+b>=c || a+c>=b || b+c>=a){
		printf("Day la tam giac");
	}else{
		printf("Day khong phai tam giac");
	}
	return 0;
}


