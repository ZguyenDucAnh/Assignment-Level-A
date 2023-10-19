//A14
#include <stdio.h>

int main(){
	int m,n,arr[100][100];
	
	printf("\nNhap m: "); 	
	scanf("%d",&m);
	printf("\nNhap n: "); 	
	scanf("%d",&n);
	fflush(stdin);
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			printf("\nNhap arr[%d][%d] = ", i+1, j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nMa tran vua nhap la:\n");
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("\nMa tran chuyen vi la:\n");
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}

	
	return 0;
}