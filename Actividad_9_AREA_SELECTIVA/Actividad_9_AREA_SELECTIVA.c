/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realizar un codigo en C que permita escoger entre calcular el área de un cuadrado o un círculo,
*/

#include<stdio.h>
#include<conio.h>

int main() {

float lado,area1,radio,area2;
char opcion;

printf("%creas:",181);
printf("\nA Cuadrado\nB C%crculo ",161);
printf("\nSeleccione una opci%cn: ",162);
scanf("%c",&opcion);

if (opcion == 'A')
    {
   printf("\nMedida del lado: ");
   scanf("%f",&lado);
   area1= lado*lado;
   printf("\nEl %crea del cuadrado es: %.2f",160,area1);
    }

if (opcion == 'B')
{
    printf("\nMedida del radio del c%crculo :",161);
    scanf("%f",&radio);
    area2= ((radio*radio)*3.1416);
    printf("\nEl %crea del c%crculo es: %.2f",160,161,area2);
}

printf("\n");
printf("\nRealizado por Daniel Zepeda");

getch ();
return 0;


}
