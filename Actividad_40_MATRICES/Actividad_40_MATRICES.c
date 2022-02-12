/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
En una matriz, de 3x3 utiliza el siguiente menu para maipularla
MATRIZ/TABLA
1. CAPTURAR
2. MOSTRAR
3-SUMAR COLUMNA
4. PROMEDIO FILA
5. SUMA TOTAL
6. MINIMO VALOR
7. SALIR
SELECCIONA UNA OPCION
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int j[3][3],x,y,fila,promedio;
    int c,suma,col,minimo;

    do{
        printf("1.CAPTURAR\n2.MOSTRAR\n3.SUMAR COLUMNA\n4.PROMEDIO FILA\n5.SUMA TOTAL\n6.MINIMO VALOR\n7.SALIR\n");
        scanf("%i",&c);

        switch(c){

        case 1:

            printf("CAPTURA LOS VALORES DE LA MATRIZ: \n");

            for(x=0;x<3;x++)
                for(y=0;y<3;y++)
                {
                scanf("%i",&j[x][y]);
                }
            break;

        case 2:
            printf("\nMOSTRAR\n");
            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                printf(" %i ",j[x][y]);
            printf("\n");
            }
            break;

        case 3:
            printf("INGRESA LA COLUMNA QUE DESEA SUMAR: ");
                scanf("%i",&col);
                suma=0;
                    for(y=0;y<3;y++)
                        suma+=j[y][col];
                            printf("\nSUMA DE COLUMNA %i\n", suma);

        break;


        case 4:
            ("INGRESA LA FILA A PROMEDIAR: ");
            scanf("%i",&fila);
            suma=0;
            for(y=0;y<3;y++)
                suma+=j[fila][y];
            promedio=suma/3;

            printf("\nPROMEDIO: %i\n",promedio);
            break;

        case 5:
            suma=0;
            printf("\nSUMA TOTAL\n");
            for(x=0;x<3;x++)
                for(y=0;y<3;y++)
                {
                suma+=j[x][y];
                }
            printf("\n %i \n",suma);
            suma=0;
            break;

        case 6:
            printf("\nMINIMO VALOR\n");
            minimo=j[0][0];

            for(x=0;x<3;x++)
                for(y=0;y<3;y++)
                {
                if(minimo>j[x][y])
                    minimo=j[x][y];
                }
              printf("\nEL MINIMO VALOR DE LA MATRIZ ES: %i\n",minimo);
              minimo=0;
              break;


        case 7:
            printf("FIN DEL PROGRAMA");
            break;

        default:
            printf("OPCION INVALIDA");

        }
    }while(c!=7);


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
