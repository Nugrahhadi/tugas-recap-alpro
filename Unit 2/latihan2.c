#include <stdio.h>

int main() {
  int Transaksi;

  scanf("%d", &Transaksi);

  if (Transaksi <= 0) {
    printf("Tidak ada transaksi hari ini");
  } else {
    int totalBiaya = 0;
    while (Transaksi--) {
      int pengeluaran;
      scanf("%d", &pengeluaran);

      totalBiaya += pengeluaran;
    }

    printf("Total transaksi hari ini : %d\n", totalBiaya);
  }
  return 0;
}