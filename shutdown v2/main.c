#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
//programa para apagar la pc version 2
int main()
{
  int choice;
  int horas;
  int minutos;

  printf("bienvenido al programa para apagar la pc ");
  printf("\nopcion 1: para ingresar la hora :");
  printf("\nopcion 2: para cancelar el apagado :");
  printf("\ncualquier otro imput cierra el programa :");
  scanf("%d",&choice);

  switch (choice)
  {
      case 1:

          horas   = conversorHoras();
          minutos = conversorMinutos();
          comando(horas,minutos);

          break;
      case 2:
          printf("\nse cancela el apagado");
          system("C:\\WINDOWS\\System32\\shutdown /a");
          break;
      default:
          printf("\nsaliendo del programa");
          break;

  }
   return 0;
}
