/*Creado el 20 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,x1,y1,y2,y3;

printf("Dame un valor para x \n");
scanf("%f",&x1);

x=x1*(3.1416/180);

y1=exp(-x);
y2=cos(x)+2*tan(x/2);
y3=log(x)+(3*pow(x,2));



printf("La respuesta a la funcion 1 es: %f \n",y1);
printf("La respuesta a la funcion 2 es: %f \n",y2);
printf("La respuesta a la funcion 3 es: %f \n",y3);

return 0;
}
