#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int ans = rand() & 1000 + 1;
  int try;
  int i = 0;
  printf("%d\n", ans);
  for(i = 0; i < 5; i++) {
    printf("Ingrese un numero entre 1 y 1000\n");
    scanf("%d", &try);
    if(try < ans)   printf("Elija un numero mayor\n");
    else if(try > ans) printf("Elija un numero menor\n");
    else if(try == ans) {
      printf("Ganaste\n");
      break;
    }
    if(try < 1 || try > 1000)  printf("Elija un numero entre 1 y mil\n");
  }
  if(i == 5)  printf("Perdiste\n");
  return 0;
}
