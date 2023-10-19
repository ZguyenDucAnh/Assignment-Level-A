//A18
//dem co bao nhieu so le va so chan co trong mang
#include <stdio.h>

int main(){
	int n, arr[100];
	do{
		printf("Nhap size: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int dem_le = 0, dem_chan = 0;
	
	for(int i = 0; i<n; i++){
		printf("\nNhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
		if(arr[i] % 2 == 0){
			dem_chan++;
		}else{
			dem_le++;
		}
	}
	
	printf("\nCo %d so chan trong mang.",dem_chan);
	printf("\nCo %d so le trong mang.",dem_le);
	return 0;
}
