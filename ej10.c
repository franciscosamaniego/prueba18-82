#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  int l = 0;
  FILE *fp;
  fp = fopen(argv[1], "r");
  while((c = fgetc(fp)) != EOF) {
    if(c == '\n') {
      l++;
    }
  }
  fclose(fp);
  printf("Lineas: %d\n", l);
  return 0;
}
