#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  while(1) {
  printf("1) Cinema\n");
  printf("2) Another man's jean\n");
  printf("3) House of the rising sun\n");
  printf("4) Daydreaming\n");
  printf("5) Don't walk away\n");
  printf("6) Salir\n");
  int choice;
  scanf("%d", &choice);
  switch (choice) {
    case 1:
      printf("Cancion hecha por Harry Styles\n");
      continue;
    case 2:
      printf("Cancion hecha por Ashe\n");
      continue;
    case 3:
      printf("Version hecha por Jeremy Renner\n");
      continue;
    case 4:
      printf("Cancion hecha por Harry Styles\n");
      continue;
    case 5:
      printf("Cancion hecha por ELO\n");
      continue;
    case 6:
      exit(0);
    default:
      printf("Elija una opcion del menu\n");
  }
  }
  return 0;
}
