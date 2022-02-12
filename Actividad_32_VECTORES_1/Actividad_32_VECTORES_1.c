/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utiliza un vector de 7 flotantesMENU DE VECTORES
1. CAPTURAR
2. MOSTRAR
3. BUSCAR
4. SUMAR VECTOR
5. SALIR
SELECCIONA UNA OPCION:_
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int op,v[7],x,buscar, bandera, suma=0;
    do
    {
        printf("\nVECTORES\n1)CAPTURAR\n2)MOSTRAR\n3)BUSCAR\n4)SUMAR\n5)SALIR\nSELECCIONA UNA OPCION: ");
        scanf("%i",&op);
        switch(op)
        {
        case 1:
            printf("\nCAPURA 7 ENTEROS\n");
            for(x=0;x<7;x++)
                scanf("%i",&v[x]);
            break;
        case 2:
            printf("\nMOSTRAR ARREGLO");
            for(x=0;x<7;x++)
                printf("\n%i",v[x]);
            break;
        case 3:
            printf("\nBUSCAR VALOR\nCAPTURA EL NUMERO A BUSCAR: ");
            scanf("%i",&buscar);
            bandera=0;
            for(x=0;x<7;x++)
                if(buscar==v[x])
                {
                    bandera=1;
                    printf("\nENCONTRADO EN EL LUGAR %i",x);
                }
                if(bandera==0)
                    printf("\nNO SE ENCONTRO\n");
                break;
        case 4:
            printf("\nSUMA DE VECTOR");
            suma=0;
            for(x=0;x<7;x++)
            {
                suma=v[x]+suma;
            }
            printf("\nLA SUMA ES: %i",suma);
            break;
        case 5:
            printf("\nFIN DEL PROGRAMA\n");
            break;
        default:printf("\nOPCION INCORRECTA\n");
        }
    }
while(op!=5);



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
