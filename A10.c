#include <stdio.h>
#include <math.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A10. Bai toan: "Tram trau, Tram co". 
//							Tram trau, tram co. trau dung an 5, trau nam an 3, lu khu trau gia 3 con an 1.
//							Tinh so trau dung, trau nam va trau gia



int main() {
  // khai bao bien
  int t, n, g;

  // xac dinh so trau dung toi da
  t = 100 / 5;

  // Lap qua gia tri cua t va n
  for (int i = 1; i <= t; i++) {
    for (int j = 1; j <= 100 / 3; j++) {
      // Tinh so trau gia
      g = 100 - i - j;

      // kiem tra xem tong so co an cua cac loai trau co bang 100 khong
      if (5 * i + 3 * j + g / 3 == 100) {
        // Neu dung, in ra ket qua
        printf("Trau dung: %d\n", i);
        printf("Trau nam: %d\n", j);
        printf("Trau gia: %d\n", g);
        printf("_____________\n");
      }
    }
  }

  return 0;
}
