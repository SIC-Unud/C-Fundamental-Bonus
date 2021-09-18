#include <stdio.h>

int main() {
  int uang = 1000, pilihanMenu, nominal;
  do {
    printf("\n\nuang anda: %d\n", uang);
    printf("menu:\n1. tambah saldo\n2. belanja\n3. keluar\nmasukkan pilihan: ");
    scanf("%d", &pilihanMenu);
    if (pilihanMenu == 1) {
      printf("masukkan jumlah saldo: ");
      scanf("%d", &nominal);
      if (nominal < 1) {
        printf("tidak bisa memasukkan nominal %d\n", nominal);
      } else {
        uang = uang + nominal;
      }
    } else if (pilihanMenu == 2) {
      printf("masukkan nominal belanjaan: ");
      scanf("%d", &nominal);
      if (nominal > uang) {
        printf("saldo anda tidak cukup\n");
      } else {
        uang = uang - nominal;
      }
    }
  } while (pilihanMenu != 3);
  return 0;
}