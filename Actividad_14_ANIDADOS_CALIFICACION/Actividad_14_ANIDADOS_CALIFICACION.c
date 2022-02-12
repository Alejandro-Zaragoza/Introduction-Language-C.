/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el código en C para un programa que pregunta al usuario una calificacion:
Si la calificacion es 100 imprime EXCELENTE
Si la calificacion está entre 99 y 90 imprime DESTACADO
Si la calificacion está entre 89 y 80 imprime MUY BIEN
Si la calificacion está entre 79 y 70 imprime BIEN
Si la calificacion está entre 69 y 60 imprime REGULAR
Si la calificacion está entre 59 y 0 imprime REPROBADO
Cualquier otra calificacion es INVALIDA
Sin utilizar operadores lógicos
*/

 #include<stdio.h>
 #include<conio.h>

 int cal;

int main ()
{
    printf("Coloque su calificaci%cn obtenida: ",162);
    scanf("%i",&cal);

    if (cal<=100){
        if (cal==100){
            printf("\n EXCELENTE ");}
            else
                if (cal>=90){
                     printf("\n DESTACADO ");}
                else
                    if (cal>=80){
                        printf("\n MUY BIEN ");}
                    else
                        if (cal>=70){
                            printf("\n BIEN ");}
                        else
                            if (cal>=60){
                                printf("\n REGULAR ");}
                            else
                                if(cal<60)
                                    printf("\n REPROBADO ");
    }

    else
        printf("\n Calificaci%cn inv%clida\n",162,160);




 printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
 getch ();
 return 0;
}
