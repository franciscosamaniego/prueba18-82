#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  FILE *fp;
  fp = fopen(argv[1], "r");
  while((c = fgetc(fp)) != EOF) {
    if(c != '\n' && c != '\t' && c != ' ') {
      printf("%c", c);
    }
  }
    printf("\n");
    fclose(fp);
  return 0;
}
