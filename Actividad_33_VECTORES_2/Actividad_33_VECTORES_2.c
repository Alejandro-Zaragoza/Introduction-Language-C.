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
    int op,s[7]={0,0,0,0,0,0,0},x,buscar, bandera, suma=0;
    int so[7]={0,0,0,0,0,0,0},n,y;

    do
    {
        printf("\n1)CAPTURAR\n2)MOSTRAR\n3)BUSCAR\n4)SUMAR\n5)INVERTIR EL VECTOR\n6)SUMAR UN VALOR\n7)SUMAR OTRO VECTOR\n8)SALIR\nSELECCIONA UNA OPCION: ");
        scanf("%i",&op);
            switch(op)
            {
                case 1:
                    printf("\nCAPURA 7 ENTEROS\n");
                        for(x=0;x<7;x++)
                            scanf("%i",&s[x]);
                break;

                case 2:
                    printf("\nMOSTRAR ARREGLO");
                        for(x=0;x<7;x++)
                            printf("\n%i",s[x]);
                break;

                case 3:
                    printf("\nBUSCAR VALOR\nCAPTURA EL NUMERO A BUSCAR: ");
                    scanf("%i",&buscar);
                    bandera=0;
                        for(x=0;x<7;x++)
                            if(buscar==s[x])
                            {
                                bandera=1;
                                printf("\nENCONTRADO EN %i",x);
                            }

                            if(bandera==0)
                                printf("\nNO SE ENCONTRO\n");
                break;

                case 4:
                    printf("\nSUMA DE VECTOR");
                    suma=0;
                        for(x=0;x<7;x++)
                        {
                            suma=s[x]+suma;
                        }
                    printf("\nLA SUMA ES: %i",suma);
                break;

                case 5:
                    printf("\nINVERIR VECTOR\n");
                        for(x=0,y=6;x<7;x++,y--)
                            so[y]=s[x];
                            for(x=0;x<7;x++)
                                s[x]=so[x];


                break;

                case 6:
                    printf("\nSUMAR UN VALOR\n");
                    printf("\nCOLOQUE UN NUMERO\n");
                    scanf("%i",&n);
                        for(x=0;x<7;x++)
                        {
                            s[x]+=n;
                            printf("\n%i",s[x]);
                        }
                break;

                case 7:
                    printf("\nSUMAR OTRO VECTOR");
                    printf("\nCAPTURA 7 NUMEROS\n");
                        for(x=0;x<7;x++)
                            scanf("%i",&so[x]);
                                for(x=0;x<7;x++)
                                {
                                    s[x]=so[x]+s[x];
                                    printf("\n%i",s[x]);
                                }
                break;

                case 8:
                    printf("\nFIN DEL PROGRAMA");
                break;

                default:
                    printf("\nOPCION INCORRECTA\n");
            }
    }
while(op!=8);



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
