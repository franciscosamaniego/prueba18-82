#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int num;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    scanf("%d", &num);
    if(num == 0) break;
    sum += num;
  }
  printf("%d\n", sum);
  return 0;
}
