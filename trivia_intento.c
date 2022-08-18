#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen("trivia.txt", "r");
  char c1;
  char c2;
  char c3;
  char c4;
  int c;
  int i = 0;
  while((c = fgetc(fp)) != EOF) {
    if(c )  c1 = c;
    i++;
  }
  return 0;
}
