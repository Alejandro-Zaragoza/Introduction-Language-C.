/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
PROGRAMA QUE PIDE AL USUARIO SU EDAD EN AÑOS Y CALCULA Y MUESTRA LOS DIAS VIVIDOS
SECUENCIAL
*/

#include<stdio.h>       //libreria que sirve para entradas y salidas
#include<conio.h>

int main() {

int EDAD,DIAS;
char NOMBRE[15];

printf("\nCAPTURA TU NOMBRE:");
scanf("%s",&NOMBRE);

printf("\ncaptura tu edad en a%cos:",164);
scanf("%i",&EDAD);

DIAS=(EDAD*365);

printf("\n %s, has vivido %i d%cas",NOMBRE,DIAS,161);

getch ();
return 0;


}
