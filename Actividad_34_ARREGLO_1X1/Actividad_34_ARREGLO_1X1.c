/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
En un arreglo de 7 enteros, manipula el arreglo con el siguiente menú:
LISTA
1. CAPTURAR
2. MOSTRAR
3. ELIMINAR ULTIMO
4. ELIMINAR VALOR
5. SALIR
SELECCIONA UNA OPCION:
*/

#include<stdio.h>
#include<conio.h>
#define Max 7
int main()
{
    int s[Max],op,x,buscar,bandera;
    int posicion=-1,aux;


    do
    {
        printf("\n1)CAPTURAR\n2)MOSTRAR\n3)ELIMINAR ULTIMO\n4)ELIMINAR VALOR\n5)SALIR\nSELECIONE UNO:  ");
        scanf("%i",&op);
            switch(op)
            {
                case 1:
                    printf("\n Capturar un numero: ");
                    if(posicion==Max-1)
                    printf("\n LLENO\n");
                    else
                    {
                        posicion++;
                        scanf("%i", &s[posicion]);
                    }
                break;

                case 2:

                    if (posicion==-1)
                    printf("\n VACIO\n");
                    else
                        for(x=0;x<=posicion;x++)
                        printf("\n%i", s[x]);
                break;

                case 3:
                    if(posicion==-1)
                        printf("VALOR INEXISTENTE ");
                    else
                    posicion--;
                break;

                case 4:
                    printf("\nCAPTURA EL NUMERO A ELIMINAR: ");
                    scanf("%i",&buscar);
                    bandera=0;
                        for(x=0;x<posicion;x++)
                            if(buscar==s[x])
                            {
                                bandera=1;
                                break;
                            }

                            for(;x<=posicion;x++){
                                s[x]=s[x+1];
                                posicion--;
                            }

                            if(bandera==0)
                                printf("\nNO SE ENCONTRO\n");
                break;

                case 5:
                    printf("\nFIN DEL PROGRAMA\n");
                    break;

                default:
                    printf("\nOPCION INCORRECTA\n");
            }
    }
while(op!=5);



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
