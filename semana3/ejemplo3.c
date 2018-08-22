/*Creado el 22 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
int main()
{

int n1,n2;

printf("Escriba dos números que sean enteros: \n");
scanf("%i %i", &n1, &n2);

if (n1==n2)
{
printf("Respuesta: %i = %i",n1,n2);
}

else if (n1>n2){
printf("Respuesta: %i > %i",n1,n2);
}

else {
printf("Respuesta: %i < %i",n1,n2);
}
return 0;
}
