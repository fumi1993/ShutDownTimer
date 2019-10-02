#include <stdio.h>
#include <stdlib.h>
//programa para apagar la pc
int main()
{
  int choice;

    printf("seleccione cuando apagar la pc \n");
    printf("se apaga en 30 mins :1 \n");
    printf("se apaga en 1 hora :2 \n");
    printf("se apaga en 1 hora 30 mins :3 \n");
    printf("se apaga en 2 horas :4 \n");
    printf("se apaga en 3 horas :5 \n");
    printf("se apaga en 5 horas :6 \n");
    printf("CANCELAR APAGADO :7 \n");
    printf("en caso de NO poner ninguna de las anteriores no se realiza accion \n");
    scanf("%d",&choice);

  switch(choice)
{
    case 1: printf("se apaga en 30 mins ");
    system("C:\\WINDOWS\\System32\\shutdown /s -t 1800");
        break;
    case 2: printf("se apaga en 1 hora ");
    system("C:\\WINDOWS\\System32\\shutdown /s -t 3600");
        break;
    case 3: printf("se apaga en 1 hora 30 mins ");
    system("C:\\WINDOWS\\System32\\shutdown /s -t 5400");
        break;
    case 4: printf("se apaga en 2 horas ");
    system("C:\\WINDOWS\\System32\\shutdown /s -t 7200");
        break;
    case 5: printf("se apaga en 3 horas ");
    system("C:\\WINDOWS\\System32\\shutdown /s -t 10800");
        break;
     case 6: printf("se apaga en 5 horas ");
    system("C:\\WINDOWS\\System32\\shutdown /s -t 18000");
        break;
    case 7: printf("Se Cancela El Apagado ");
    system("C:\\WINDOWS\\System32\\shutdown /a");
        break;
    default: printf("no se realiza accion \a ");
        break;
}


   return 0;
}
