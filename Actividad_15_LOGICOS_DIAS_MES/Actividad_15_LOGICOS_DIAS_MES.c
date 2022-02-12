/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utilizando operadores lógicos, realiza el Código en C, que solicite al usuario el número de mes que desea (del 1 al 12)
cualquier otro numero es invalido e imprime el numero de días que tiene ese mes.
Considere:
El mes 2 tiene 28-29 dias
Los meses 4,6,9 y 11 tienen 30 dias
Los meses 1,3,5,7,8,10 y 12 tienen 31 dias
Si puedes anidar también.
*/

 #include<stdio.h>
 #include<conio.h>

int mes;

int main ()
{

    printf("Ingrese el n%cmero de mes: ",163);
    scanf("%i",&mes);


    if (mes<=12){

        if ( mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
            printf("\n \n El mes que seleccionaste tiene 31 d%cas ",161);

                    if ( mes==4 || mes==6 || mes==9 || mes==11 )
                        printf("\n \n El mes que seleccionaste tiene 30 d%cas ",161);

                                if ( mes==2 )
                                    printf("\n \n El mes que seleccionaste tiene 28-29 d%cas ",161);
    }

    else{
       printf("\n Mes inv%clido ",160);}


    printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
    getch ();
    return 0;

}
