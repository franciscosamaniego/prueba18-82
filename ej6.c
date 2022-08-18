#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int num;
  while(scanf("%d", &num) != EOF) {
    if(num > a && num < b) printf("%d ", num);
  }
  printf("\n");
  return 0;
}
