#include <stdio.h>

int KelilingPersegi(int sisi) {
  return 4 * sisi;
}

int LuasPersegi(int sisi) {
  return sisi * sisi;
}

int VolumeKubus(int sisi) {
  return sisi * sisi * sisi;
}

int main() {
  int sisi;
  scanf("%d", &sisi);

  printf("%d\n", KelilingPersegi(sisi));
  printf("%d\n", LuasPersegi(sisi));
  printf("%d\n", VolumeKubus(sisi));
  return 0;
}
