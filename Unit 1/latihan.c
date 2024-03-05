#include <stdio.h>

int main() {
  
  // v = kecepatan (m/s).
  // s = jarak (m).
  // t = waktu (s).
  
  int s1, t1, v2, t2, s3, v3;

  // Input
  scanf("%d %d", &s1, &t1);
  scanf("%d %d", &v2, &t2);
  scanf("%d %d", &s3, &v3);

  // Output
  printf("%.2f\n", (float)s1 / t1);
  printf("%.2f\n", (float)v2 * t2);
  printf("%.2f\n", (float)s3 / v3);
  return 0;
}