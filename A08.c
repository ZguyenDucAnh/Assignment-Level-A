#include <stdio.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A08. nhap n va mang array. Tim gia tri lon nhat
int main(){
	int n;
	printf("Nhap n: "); 	scanf("%d",&n);
	
	float arr[100];
	for(int i = 0; i<n; i++){
		printf("Nhap arr[%d]: ",i); 	scanf("%f",&arr[i]);
	}
	
	
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(arr[i] < arr[j]){
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		printf("Max: %5.1f ",arr[i]);
		break;
	}
	
	return 0;
}




