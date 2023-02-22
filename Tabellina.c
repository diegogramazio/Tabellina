#include <stdio.h>

void tabellina(int n) {
      for(int i=1; i<=10; i++)
            printf("%d ", i*n);
}

int main() {
      int numero;
      printf("Introduci un numero intero compreso fra 1 e 9.\n");
      scanf("%d", &numero);
      tabellina(numero);
      system("PAUSE");
}
