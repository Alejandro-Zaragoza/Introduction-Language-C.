/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el código en C, para un programa que pregunte al usurio la cantidad de pantalones a comprar,
si la cantidad es menor que 10 el precio será de $260.50 si no el precio será de $250.50,
calcular y mostrar el importe, IVA y el Total a Pagar.
*/

#include<stdio.h>
#include<conio.h>

int main() {

float pantalones,cantidad,iva,total;

printf("Cu%cntos pantalones se van a adquirir  ",160);
scanf("%f",&pantalones);




if(pantalones < 10)
{
    cantidad= pantalones*260.50;
    iva=cantidad*.16;
    total= cantidad + iva;
    printf("\nPrecio por unidad= %c 260.50  Importe= %c %.2f",36,36,cantidad);

    printf("\nIVA= %c %.2f   Total= %c %.2f ",36,iva,36,total);

}



else
{
    cantidad= pantalones*250.50;
    iva=cantidad*.16;
    total= cantidad + iva;
    printf("\nPrecio por unidad= %c 250.50     Importe= %c %.2f",36,36,cantidad);
    printf("\nIVA= %c %.2f   Total= %c %.2f ",36,iva,36,total);
}


printf("\n");
printf("\nRealizado por Daniel Zepeda");

getch ();
return 0;


}
