/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el código en C, para un programa que pide el número de días transcurridos del año e imprimir a qué mes pertenece.
Por ejemplo si se captura 32 se imprimirá el mes es febrero. Recuerda que año solo tiene 365 días.
puedes aplicar: Anidados y logicos
*/

 #include<stdio.h>
 #include<conio.h>

int dias;

int main (){

 printf("Coloque los d%cas que han transcurrido : ",161);
    scanf("%i",&dias);

    if (dias<=365){

                    if (dias>=0 && dias<=31){
                        printf("\n ENERO ");}
                    else
                        if (dias>31 && dias<=59){
                            printf("\n FEBRERO ");}
                        else
                            if (dias>59 && dias<=90){
                                printf("\n MARZO ");}
                            else
                                if (dias>90 && dias<=120){
                                    printf("\n ABRIL ");}
                                else
                                    if (dias>120 && dias<=151){
                                        printf("\n MAYO ");}
                                    else
                                        if (dias>151 && dias<=181){
                                            printf("\n JUNIO ");}
                                        else
                                            if (dias>181 && dias<=212){
                                                printf("\n JULIO ");}
                                            else
                                                if (dias>212 && dias<=243){
                                                    printf("\n AGOSTO ");}
                                                else
                                                    if (dias>243 && dias<=273){
                                                        printf("\n SEPTIEMBRE ");}
                                                    else
                                                        if (dias>273 && dias<=304){
                                                            printf("\n OCTUBRE ");}
                                                        else
                                                            if (dias>304 && dias<=334){
                                                                printf("\n NOVIEMBRE ");}
                                                            else
                                                                if (dias>334 && dias<=365){
                                                                    printf("\n DICIEMBRE ");}



    }

    else
      printf("\nN%cmuero inv%clido",163,160);



 printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
 getch ();
 return 0;
}





















