/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utiliza el programa que vimos en claseRealiza el programa que muestre una lista de autos (4 automoviles), utilice el switch para que muestre el precio, pregunte
con otro menú las opciones de pago
1. CONTADO
2. 24 MESES
3. 36 MESES
4. 48 MESES
Al contado se realiza un descuento del 5% del auto, las demas opciones el descuento es 0.
al seleccionar una mensualidad se le aumenta un 5% de interés y muestra la cantidad fija de pago mensual.
*/


#include<stdio.h>
#include<conio.h>

int main()
{
    char op;
    char me;
    float precio;
printf("ELIJA UNA OPCION:  \nA. Jetta \nB. Versa \nC.S10 1992 \nD. Fit:\n");
scanf("%c", &op);
switch(op)
{
case'A': case 'a':
    precio= 630000;
    break;
    case'B': case 'b':
    precio= 280000;
    break;
    case'C': case 'c':
    precio=120000;
    break;
    case'D': case 'd':
    precio= 300000;
    break;
     default:
        printf("\n ESE AUTO NO ESTA A LA VENTA\n");
}
printf("El auto cuesta $ %.2f \n\n", precio);


printf("ELIJA UNA OPCION DE PAGO:  \nA. CONTADO \nB. 24 MESES \nC. 36 MESES \nD. 48 MESES\n:");
fflush(stdin);
scanf("%c", &me);

switch(me)
{
case'A': case 'a':
     printf("\nOBTIENES 5%% DE DESCUENTO\nTOTAL: %.2f\nNO HAY MENSUALIDAD ",precio*.95);
    break;


    case'B': case 'b':
        printf("\nSE AUMENTA 5%% DE INTERES\nTOTAL: %.2f \nMENSUALIDAD DE %.2f",precio*1.05,(precio*1.05)/24);
    break;


    case'C': case 'c':
        printf("\nSE AUMENTA 5%% DE INTERES\nTOTAL: %.2f \nMENSUALIDAD DE %.2f",precio*1.05,(precio*1.05)/36);
    break;


    case'D': case 'd':
        printf("\nSE AUMENTA 5%% DE INTERES\nTOTAL: %.2f \nMENSUALIDAD DE %.2f",precio*1.05,(precio*1.05)/48);
    break;


     default:
        printf("\nESA NO ES UNA OPCION DE PAGO\n");
}

    getch ();
    return 0 ;
}
