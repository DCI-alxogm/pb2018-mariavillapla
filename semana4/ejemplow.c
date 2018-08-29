#include<stdio.h>
int main()
{
float tempc, tempk;
float inicial=100, final=200, delta;
int n=10;

delta=(final-inicial)/n;
tempc=inicial;

while (tempc<=final){
tempk=tempc+273.15;
printf("%f %f/n", tempc, tempk);
tempc=tempc+delta;     //    tempc+=delta
}
return 0;
}
