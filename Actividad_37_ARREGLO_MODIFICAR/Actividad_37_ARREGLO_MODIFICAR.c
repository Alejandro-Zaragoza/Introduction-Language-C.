/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa que pide al usuario una palabra, después de
leer pide que caracter desea cambiar y porqué otro caracter
desa cambiarlo. Muestra la palabra ya modificada.
Presione 1 si desea otra palabra
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[20],car,sus;
    int ciclo,x;

    do{
    printf("CAPTURA UNA PALABRA: ");
    scanf("%s",&palabra);

    printf("%s\n",palabra);

    printf("\nCARACTER A CAMBIAR: ");
    fflush(stdin);
    scanf("%c",&car);

    printf("\nSUSTITUIR POR: ");
    fflush(stdin);
    scanf("%c",&sus);

        for (x=0;x<=20;x++){

        if(palabra[x]==car){
            palabra[x]= sus;
                            }
        }

    printf("\n%s",palabra);

    printf("\nPARA OTRA PALABRA PULSA 1 ");
    scanf("%i",&ciclo);

    }while(ciclo==1);


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
