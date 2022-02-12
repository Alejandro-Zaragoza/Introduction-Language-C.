/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
En un estacionamiento cobran $ 15.50 por hora o fracción. Crea el código en C,
que determine cuanto debe pagar un cliente por el estacionamiento de su vehículo,
conociendo el tiempo de estacionamiento en horas y minutos.
*/

#include<stdio.h>
#include<conio.h>

int main ()
{

 float horas, minutos,total;


 printf("Introduce la cantidad de horas:");
 scanf("%f",&horas);

 printf("\nIntroduce la cantidad de minutos:");
 scanf("%f",&minutos);


 if (minutos>0)
{
    total= (horas*15.50)+ 15.50;
    printf("\n  Horas= %.0f  Minutos= %.0f",horas,minutos);
    printf("\n  Cantidad a pagar= %c %.2f",36,total);

}
else
{
    total= (horas*15.50);
    printf("\n  Horas= %.0f  Minutos= %.0f",horas,minutos);
    printf("\n  Cantidad a pagar= %c %.2f",36,total);
}

 printf("\nRealizado por DANIEL ZEPEDA");
 getch ();
 return 0;
}
