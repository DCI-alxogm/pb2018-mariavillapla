/*Creado el 20 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,z,r,phi,teta;

printf("Dame la coordenada cartesiana x \n");
scanf("%f",&x);
printf("Dame la coordenada cartesiana y \n");
scanf("%f",&y);
printf("Dame la coordenada cartesiana z \n");
scanf("%f",&z);

r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
teta=acos(z/r);
phi=atan(x/y);


printf("La coordenada esférica r es %f \n",r);
printf("La coordenada esférica φ es %f \n",phi);
printf("La coordenada esférica θ es %f \n",teta);



return 0;
}
