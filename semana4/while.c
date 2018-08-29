#include<stdio.h>
#include<math.h>
int main()
{
int l=1,opcion;
float x,y,z,r,phi,teta,c,k,f,c1;

printf("¿Que conversión quieres utilizar? Dame la opción que desees utilizar. \n");

while (l==1){

printf("(1) Para convertir temperaturas \n");
printf("(2) Para converit coordenadas \n");
scanf("%i",&opcion);

switch(opcion)
{
case 1: 
printf("Cual es la temperatura en C° del dia de hoy \n");
scanf("%f",&c);

f= (c*1.8)+32;
k=c+273.15;

printf("La temperatura en K el dia de hoy es: %f \n",k);
printf("La temperatura en °F el dia de hoy es: %f \n",f);

c1=(f-32)/1.8;

printf("Finalmente la temperatura de regreso en °C el dia de hoy es: %f \n",c1);
break;

case 2:
printf("Dame la coordenada cartesiana x \n");
scanf("%i",&x);
printf("Dame la coordenada cartesiana y \n");
scanf("%i",&y);
printf("Dame la coordenada cartesiana z \n");
scanf("%i",&z);

r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
teta=acos(z/r);
phi=atan(x/y);

printf("La coordenada esférica r es %i \n",r);
printf("La coordenada esférica φ es %i \n",phi);
printf("La coordenada esférica θ es %i \n",teta);

break;

default:
printf("Opción invalida debes de elegir entre las dos opciones \n");
break;
}

printf("Para elegir otra opción inserta 1 o para salir del programa presiona otro número diferente a 1\n");
scanf("%i",&l);

}

return 0;
}
