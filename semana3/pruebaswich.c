/*Creado el 22 de agosto de 2018 por María Villalobos para probar como funciona el switch*/
#include<stdio.h>
int main()
{
int opcion;
printf("Dame una opcion \n");
printf("(1) Para convertir temperaturas \n");
printf("(2) Para converit coordenadas \n");
scanf("%i",&opcion);

switch(opcion)
{
case 1: 
printf("Entre a la opcion 1 \n");
break;

case 2:
printf("Entre a la opcion 2 \n");
break;

default:
printf("Opción invalida \n");
break;
}

return 0;
}
