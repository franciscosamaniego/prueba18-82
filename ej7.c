#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a;
  int b;
  int n;
  printf("Ingrese un numero para a\n");
  scanf("%d", &a);
  printf("Ingrese un numero para b\n");
  scanf("%d", &b);
  printf("Ingrese un numero para n\n");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int r = (rand() % b - a - 1) + a + 1;
    printf("%d ", r);
  }
  printf("\n");
  return 0;
}
