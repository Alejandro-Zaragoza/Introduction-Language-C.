/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el código en C, para un programa que imprime el % de niños y niñas que hay en un salón
imprimiendo el grado y el porcentage de alumnos.
*/

#include<stdio.h>
#include<conio.h>

int main() {

float porcentaje1,porcentaje2,porcentajet;
float nios,nias,total;
char grado[15];


printf("De que grado son los alumnos:");
scanf("%s",&grado);

printf("\nCantidad de ni%cos:",164);
scanf("%f",&nios);

printf("\nCantidad de ni%cas:",164);
scanf("%f",&nias);

total= nios + nias;
porcentaje1= (nios*100)/total;
porcentaje2= (nias*100)/total;
porcentajet= porcentaje1+porcentaje2;

printf("\n%s     CANTIDAD  -  %%",grado);
printf("\nNi%cos  %.0f       -  %.2f %% ",164,nios,porcentaje1);
printf("\nNi%cas  %.0f       -  %.2f %% ",164,nias,porcentaje2);
printf("\nTotal  %.0f       -  %.2f %% ",total,porcentajet);

printf("\n Realizado por Daniel Zepeda");

getch ();
return 0;


}
