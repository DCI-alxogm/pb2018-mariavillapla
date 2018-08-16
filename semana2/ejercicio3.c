/*Creado el 16 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
int main()
{
float a,b,c,d,aa,ab,ac,ad;

printf("Dame un numero que pertenezca a los reales \n");
scanf("%f",&a);

printf("Dame un segundo numero pertenezca a los reales \n");
scanf("%f",&b);

printf("Dame un tercer numero pertenezca a los reales \n");
scanf("%f",&c);

printf("Dame un cuarto numero pertenezca a los reales \n");
scanf("%f",&d);

aa=(a+b)*c/d;
ab=((a+b)*c)/d;
ac=(a+b)*c/d;
ad=a*(b*c)/d;

printf("El resultado de la primera operación es: %f \n",aa);
printf("El resultado de la primera operación es: %f \n",ab);
printf("El resultado de la primera operación es: %f \n",ac);
printf("El resultado de la primera operación es: %f \n",ad);

return 0;
}
