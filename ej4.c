#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  int num;
  while(scanf("%d", &num) != EOF) {
    sum += num;
  }
  printf("%d\n", sum);
  return 0;
}
