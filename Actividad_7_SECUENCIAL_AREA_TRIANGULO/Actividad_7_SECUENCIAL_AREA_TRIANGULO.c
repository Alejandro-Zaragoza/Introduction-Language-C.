/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el c�digo en C, para un programa que pida al usuario los datos necesarios para calcular
 y mostrar el �rea de un tri�ngulo.
*/

#include<stdio.h>
#include<conio.h>

int main() {

float base,altura,area;


printf("Captura la base del tri%cngulo: ",160);
scanf("%f",&base);

printf("\nCaptura la altura del tri%cngulo: ",160);
scanf("%f",&altura);

area= (base*altura) / 2;

printf("\nBase= %.2f  altura= %.2f ",base,altura);

printf("\n%crea = %.2f ",160,area);

printf("\nRealizado por Daniel Zepeda");

getch ();
return 0;


}
