#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen("trivia.txt", "r");
  int c;
  printf("Bienvenido a la trivia. Quiere jugar?\n");
  printf("1) Si\n");
  printf("2) No\n");
  int choice;
  int respuesta;
  int l = 0;
  int i = 5;
  int n = atoi(argv[1]);
  int puntaje = 0;
  int cont = 100 / n;
  scanf("%d", &choice);
    if(choice == 2) {
      printf("Bueno, nos vemos pronto\n");
      return 0;
    }
    else if (choice < 1 || choice > 2)  printf("Esa no es una opcion\n");
      printf("Perfecto\n");
      for(int j = 0; j < n; j++) {
        while(l < i) {
          if(c == '\n') l++;
          c = fgetc(fp);
          printf("%c", c);
          if(l == 5)  respuesta = 1;
          else if(l == 11)  respuesta = 3;
          else if(l == 17)  respuesta = 2;
          else if(l == 23)  respuesta = 4;
          else if(l == 29)  respuesta = 4;
        }
        i+= 6;
        printf("5)Terminar la trivia\n");
        scanf("%d", &choice);
        if(choice == respuesta) {
          printf("Correcto\n\n");
          puntaje += cont;
        }
        else if(choice > 5 || choice < 1)  {
        printf("Elegi una respuesta valida\n");
      }
      else if(choice == 5) break;
        else printf("Incorrecto\n");
      }
      printf("Puntaje final: %d\n", puntaje);
  return 0;
}
