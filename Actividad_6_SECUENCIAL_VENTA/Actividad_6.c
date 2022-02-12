/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa en C, que pida al usuario el nombre de un producto,
el precio y la catidad a comprar, calcular y mostrar el IMPORTE (precio por cantidad).
Desglosa el IVA, es el 16% del importe y lo muestra.
*/

#include<stdio.h>
#include<conio.h>

int main() {

float precio,importe,iva;
int cantidad;
char producto[15];


printf("Captura el nombre del producto:");
scanf("%s",&producto);

printf("\nCaptura el precio del producto:");
scanf("%f",&precio);

printf("\nCaptura la cantidad a adquirir:");
scanf("%i",&cantidad);

importe= precio * cantidad;

iva= importe * (0.16);

printf("\n %s tiene un precio de %.2f",producto,precio);


printf("\n vas a adquirir la cantidad de %i",cantidad);


printf("\n el importe es= %.2f  y el iva es %.2f",importe,iva);


printf("\n Realizado por Daniel Zepeda");

getch ();
return 0;


}
