/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Programa que pide al usuario un numero, pregunta si desea otro, presionando S o s,
cuando no presione s o S, imprime cuantos número se registraron y cual de todos fue el menor.
*/


#include<stdio.h>
#include<conio.h>
int c=1,num,n,j,x,t=1;;
char palabra;
int main()
{
    while (c==1){

        printf("Introduzca su n%cmero:",163);
        scanf("%i",&num);
        n=n+1;

        if (t==1)
        {
            j=num;
            t=2;
        }

        if (num<=j){
            x=num;
            j=num;
        }


        printf("Desea repetir la cuenta ?\nprecione s o S\n");
        scanf("%s",&palabra);
        if (palabra=='s'||palabra=='S')
        c=1;

        else{
        printf("Se registraron %i n%cmeros\nEl menor es: %i",n,163,x);
        c=2;}

    }
    printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
    getch ();
    return 0 ;
}
