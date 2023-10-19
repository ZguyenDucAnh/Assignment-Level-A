//A16
//dem so x co trong mang
#include <stdio.h>



int main(){
	int size, arr[100];
	do{
		printf("\nNhap size: ");
		scanf("%d",&size);
	}while(size<=0);
	
	for(int i = 0; i<size; i++){
		printf("\n Nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	
	int count = 0;
	int sodem;
	printf("\nNhap so can dem: ");
	scanf("%d",&sodem);
	for(int i = 0; i<size; i++){
		if(sodem == arr[i]){
			count++;
		}
	}
	
	printf("\nco %d so %d trong mang.",count, sodem);
	
	return 0;
}