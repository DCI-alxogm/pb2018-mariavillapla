/*Creado el 16 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
int main()
{
int a,b,c,d,aa,ab,ac,ad;

printf("Dame un numero \n");
scanf("%i",&a);

printf("Dame un segundo numero \n");
scanf("%i",&b);

printf("Dame un tercer numero \n");
scanf("%i",&c);

printf("Dame un cuarto numero \n");
scanf("%i",&d);

aa=(a+b)*c/d;
ab=((a+b)*c)/d;
ac=(a+b)*c/d;
ad=a*(b*c)/d;

printf("El resultado de la primera operación es: %i \n",aa);
printf("El resultado de la primera operación es: %i \n",ab);
printf("El resultado de la primera operación es: %i \n",ac);
printf("El resultado de la primera operación es: %i \n",ad);

return 0;
}
