/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa que pide al usuario una palabra y la invierte, ojo, invierte el contendo de la cadena y la muestra ya invertida.
Presione s o S para pedir otra palabra
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[20],ciclo,inv[20];
    int x,y,z,k=0;

    do{
    printf("CAPTURA UNA PALABRA: ");
    scanf("%s",&palabra);

    for (x=0;x<=20;x++){

        if(palabra[x]!= '\0'){
            printf("%c",palabra[x]);
            k++;
            }
        else
            break;
    }

    for(z=-1,y=k;z<k;z++,y--){
            inv[y]=palabra[z];}

    for(x=0;x<k;x++)
        palabra[x]=inv[x];

            printf("\n");

            printf("%s",palabra);

        k=0;
    printf("\nPARA OTRA PALABRA PULSA 's' o 'S' ");
    fflush(stdin);
    scanf("%c",&ciclo);

    }while(ciclo=='s' || ciclo== 'S');


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
