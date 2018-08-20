/*Creado el 20 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
int main()
{
float c,k,f,c1;

printf("Cual es la temperatura en C° del dia de hoy \n");
scanf("%f",&c);

f= (c*1.8)+32;
k=c+273.15;

printf("La temperatura en K el dia de hoy es: %f \n",k);
printf("La temperatura en °F el dia de hoy es: %f \n",f);

c1=(f-32)/1.8;

printf("Finalmente la temperatura de regreso en °C el dia de hoy es: %f \n",c1);


return 0;
}
