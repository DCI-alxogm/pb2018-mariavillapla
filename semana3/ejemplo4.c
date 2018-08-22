/*Creado el 22 de agosto de 2018 por María Villalobos*/
#include<stdio.h>
int main()
{
char c;
int vocalminuscula,vocalmayuscula;

printf("Dame una letra: \n");
scanf("%c",&c);

vocalminuscula = (c == 'a'||c == 'e'||c == 'i'|c == 'o'|c == 'u');
vocalmayuscula = (c == 'A'||c == 'E'||c == 'I'|c == 'O'|c == 'U');

if (vocalmayuscula || vocalminuscula){
printf("%c es una letra que es vocal \n");
}
else{
printf("%c es una letra que es consonante\n");
}
return 0;
}

