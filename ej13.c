#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  int pal = 0;
  int word = 0;
  FILE *fp;
  fp = fopen(argv[1], "r");
  while((c = fgetc(fp)) != EOF) {
    if(c != '\n' && c != '\t' && c != ' ') {
      word = 1;
    }
    else {
      if(word != 0)  {
        pal++;
        word = 0;
      }
    }
  }
  fclose(fp);
    printf("Palabras: %d\n", pal);
  return 0;
}
