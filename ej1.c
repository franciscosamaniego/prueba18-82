#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int num;
  int cont = 0;
  for(int i = 0; i < n; i++) {
    scanf("%d", &num);
    cont += num;
  }
  printf("%d\n", cont);
  return 0;
}
