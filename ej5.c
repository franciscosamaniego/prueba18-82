#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  int l = 0;
  FILE *fp;
  fp = fopen(argv[1], "r");
  int i = 0;
  while(c = fgetc(fp) != EOF) {
    i++;
  }
  printf("Caracteres: %d\n", i);
  fclose(fp);
  return 0;
}
