/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa para capturar una lista de alumnos, como máximo 7
alumos, de 1 a la vez, es decir, registras el alumno y regresa al menú,
recierda mostrar lleno cuando ya esté  lleno el grupo y vacio si Realiza
un programa que capture y muestre a los alumnos registrados
1. CAPTURAR
2. MOSTRAR
3. SALIR
SELECCIONA UNA OPCIÓN:


Recuerda que se capturan todos los alumnos y muestra todos los alumnos
se termina con la opcion de salir, cualquier otra opcion es Invalida
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char alumnos[7][10];
    int c,i,cont=0;

    do{
        printf("1.CAPTURAR\n2.MOSTRAR\n3.SALIR\n");
        scanf("%i",&c);

        switch(c){

        case 1:
        if(cont<7){
            printf("\nCaptura el alumno %i :",cont);
            scanf("%s",&alumnos[cont]);
            cont++;
            printf("\n");
            }
        else
            printf("\nLLENO\n");

        break;

        case 2:
            if(cont>0){

                for(i=0;i<cont;i++){

                printf("\n%s",alumnos[i]);
                printf("\n");}

            }
            else
                printf("\nVACIO\n");

            printf("\n");

        break;



        case 3:
        printf("FIN DEL PROGRAMA");
        break;
        }





    }while(c!=3);


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
