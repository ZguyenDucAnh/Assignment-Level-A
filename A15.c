//A15
#include <stdio.h>

void tinh_tich_ma_tran(int m, int n, int k, int A[][n], int B[][k], int C[][k]) {
  	for (int i = 0; i < m; i++) {
    	for (int j = 0; j < k; j++) {
      		C[i][j] = 0;
      		for (int p = 0; p < n; p++) {
        		C[i][j] += A[i][p] * B[p][j];
      		}
    	}
  	}
}

int main() {
  	int m, n, k;

  	printf("Nhap so hang m: ");
  	scanf("%d", &m);

  	printf("\nNhap so cot n: ");
  	scanf("%d", &n);

  	printf("\nNhap so cot k: ");
  	scanf("%d", &k);

  	int A[m][n], B[n][k], C[m][k];

  	printf("\nNhap ma tran mxn:\n");
  	for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
      		printf("\nA[%d][%d] = ",i+1,j+1);
			scanf("%d", &A[i][j]);
    	}
  	}

  	printf("\nNhap ma tran nxk:\n");
  	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < k; j++) {
    	printf("\nB[%d][%d] = ",i+1,j+1);
      	scanf("%d", &B[i][j]);
    	}
  	}

  	tinh_tich_ma_tran(m, n, k, A, B, C);

  	printf("\nTich 2 ma tran tren la:\n");
  	for (int i = 0; i < m; i++) {
    	for (int j = 0; j < k; j++) {
      		printf("%d ", C[i][j]);
    	}
    	printf("\n");
  	}

  return 0;
}
