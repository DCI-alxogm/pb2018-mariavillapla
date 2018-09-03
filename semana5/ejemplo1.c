#include<stdio.h>
int main()
{
float tempc,tempk;
float inicial=100,final=200,delta;
int n=10,i;

delta=(final-tempc)/n;
for(i=0;i<n;i++){
tempk=tempc+273.15;
printf("%f %f\n",tempc,tempk);
tempc=tempc+delta;         //     tempc+=delta;
}
return 0;
}
