#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n;
  scanf("%d", &n);
  int num;
  int sum;
  for(int i = 0; i < n; i++) {
    num = rand() % 100;
    sum += num;
    printf("%d ", num);
  }
  printf("\n");
  printf("%d\n", sum);
  return 0;
}
