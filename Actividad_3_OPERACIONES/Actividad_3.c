/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa en C, que pida al usuario dos numeros enteros, calcule y muestre el resultado de la siguiente: SUMA, RESTA, MULTIPLICACION,
DIVISION Y RESIDUO
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int valor1, valor2;
    int suma, resta, multiplicacion,division,residuo;

    printf("Coloca el valor 1 :");
    scanf("%i",&valor1);

    printf("\n Coloca el valor 2 :");
    scanf("%i",&valor2);

    printf("\n N1= %i y N2= %i",valor1,valor2);

    suma = valor1 + valor2;
    resta = valor1 - valor2;
    multiplicacion = valor1 * valor2;
    division = valor1 / valor2;
    residuo = valor1 % valor2;


    printf("\n suma= %i + %i = %i",valor1,valor2,suma);
    printf("\n resta= %i - %i = %i",valor1,valor2,resta);
    printf("\n multiplicacion= %i * %i = %i",valor1,valor2,multiplicacion);
    printf("\n division= %i / %i = %i",valor1,valor2,division);
    printf("\n residuo= %i %% %i =%i",valor1,valor2,residuo);


    printf("\n Realizado por Daniel Alejandro ");
    getch();
    return 0;
}
