//A17
//Tim so be nhat trong mang va vi tri cua no
#include <stdio.h>

int main(){
	int n, arr[100];
	
	printf("Nhap size: ");
	scanf("%d",&n);
	fflush(stdin);
	int min = arr[0];
	for(int i = 0; i<n; i++){
		printf("\nNhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
		if(min > arr[i]){
			min = arr[i];
		}

	}
	printf("\nMin: %d",min);
	for(int i = 0; i<n; i++){
		if(min == arr[i]){
			printf("\nVi tri cua so be nhat trong mang la: %d.",i+1);
		}
	}	
	

	return 0;
}