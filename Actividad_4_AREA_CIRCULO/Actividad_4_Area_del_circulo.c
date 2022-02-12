/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el programa en C, para solicitar al usuario los datos necesarios para calcular y mostrar el área de un círculo.

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float radio,operacion,otra;

    printf("Coloca el valor del radio del c%crculo :",161);
    scanf("%f",&radio);

    printf("\n Valores: radio= %.1f   pi= 3.1416",radio);

    operacion= radio*radio;
    otra= ((3.1416)*operacion);

    printf("\n %crea = pi(%.1f) %c 2 = %.1f",160,radio,94,otra);



    printf("\n Realizado por Daniel Alejandro ");
    getch();
    return 0;
}
