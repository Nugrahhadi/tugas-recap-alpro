#include <stdio.h>

int main() {
  int n;
  // Masukin jumlah elemen ke array
  scanf("%d", &n);

  int numbers[n];
  // Masukin Nilai ke Array
  for (int i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  // Jumlahin Semua angka di dalem array
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += numbers[i];
  }

  printf("Total : %d\n", total);
  return 0;
}