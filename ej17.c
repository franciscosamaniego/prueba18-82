#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen(argv[1], "r");
  int n = atoi(argv[2]);
  int c;
  while((c = fgetc(fp)) != EOF) {
    if(c > 'z') {
      c -= 'a';
    }
    else if(c > 'Z') {
      c -= 'A';
    }
    c += n;
    printf("%c ", c);
  }
  printf("\n");
  return 0;
}
