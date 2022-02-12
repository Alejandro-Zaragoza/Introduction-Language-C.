/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
En una matriz, de 3x3 utiliza el siguiente menu para manipularla
MATRIZ/TABLA
1. CAPTURAR
2. MOSTRAR
3. SUMAR VECTOR
4. SUMAR UN NUMERO
5. DIAGONAL A VECTOR
6. SUMA DE DIAGONAL
7. SALIR
SELECCIONA UNA OPCION_
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int j[3][3],m[3],x,y,fila;
    int c,col,sumvec,numsum;

    do{
        printf("1.CAPTURAR\n2.MOSTRAR\n3.SUMAR VECTOR\n4.SUMAR UN NUMERO\n5.DIAGONAL A VECTOR\n6.SUMA DE DIAGONAL\n7.INVERTIR FILAS Y COLUMNAS\n8.INVERTIR TABLA\n9.SALIR\n");
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
            printf("INGRESE LOS VALORES DEL VECTOR A SUMAR : " );
            for(x=0;x<3;x++)
                scanf("%i",&m[x]);

            for(x=0;x<3;x++)
            {

                for(y=0;y<3;y++)
                j[x][y]=j[x][y]+m[x];

            }

            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                printf(" %i ",j[x][y]);
            printf("\n");
            }
        break;


        case 4:
            printf("COLOCA EL NUMERO QUE DESEAS SUMAR A LA MATRIZ: ");
            scanf("%i",&numsum);

            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                j[x][y]=j[x][y]+1;

            }

            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                printf(" %i ",j[x][y]);
            printf("\n");
            }
            break;

        case 5:
            for(x=0;x<3;x++)
            {
            m[x]=j[x][x];
            }

            for(x=0;x<3;x++)
            {
            printf(" %i \n",m[x]);
            }

            break;

        case 6:
            for(x=0;x<3;x++)
            {
            m[x]=j[x][x];
            }

            for(x=0;x<3;x++)
            {

            }
             for(x=0;x<3;x++)
            {

                for(y=0;y<3;y++)
                j[x][y]=j[x][y]+m[x];

            }

            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                printf(" %i ",j[x][y]);
            printf("\n");
            }

              break;

        case 7:

            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                printf(" %i ",j[y][x]);
            printf("\n");
            }


            break;

        case 8:
            for(x=2;x>=0;x--)
            {
                for(y=2;y>=0;y--)
                printf(" %i ",j[x][y]);
            printf("\n");
            }


            break;


        case 9:
            printf("FIN DEL PROGRAMA");
            break;

        default:
            printf("OPCION INVALIDA");

        }
    }while(c!=9);


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
