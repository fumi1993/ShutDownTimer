#include <stdio.h>
#include <stdlib.h>

int conversorHoras()
{
    int horas=1;
    printf("\ningrese las horas :");
    scanf("%d",&horas);
    horas = horas*3600;

    return horas;
}

int conversorMinutos()
{
   int minutos=1;

    printf("\ningrese los minutos :");
    scanf("%d",&minutos);
    minutos = minutos*60;

   return minutos;
}

char comando(int minutos, int horas)
{


    char str1[100] = {};
    int time;
    time = minutos + horas;

    sprintf(str1,"C:\\WINDOWS\\System32\\shutdown /s -t %d",time);

    return system(str1);
}

