#include <studio.h>
int main()
{
int opcion;
printf("Dame una opcion \n");
printf("(1) Para convertir temperaturas \n");
printf("(2) Para converit coordenadas \n");
scanf("%i",opcion);

switch(opcion)
{
case 1; 
printf("Entre a la opcion 1");
break;

case 2;
printf("Entre a la opcion 2");
break;

default;
printf("Opción invalida");
break;

return 0;
}
