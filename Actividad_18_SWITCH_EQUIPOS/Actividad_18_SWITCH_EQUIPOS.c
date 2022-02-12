/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utiliza la instruccion SWITCH para mostrar a que equipo pertenece el participante según su edad.
puedes utilizar if-else y operadores lógicos e incluso anidados para determinar el rango de edad y evaluarlo en el switch
Si tiene:
De 4 a 7 años está en el quipo AMARILLO.
De 8 a 11 años está en el quipo NARANJA.
De 12 a 15 años está en el quipo AZUL
De 16 a 19 años está en el quipo VERDE.
Cualquier otra edad no puede pertenecer a ningún equipo.
Solo debe haber una impresion por color con un solo valor en el caso.
*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int edad,cond;


printf("Introduzca su edad:");
scanf("%d", &edad);

    if ((edad>3)&&(edad<8)){
        cond = 1;
        }
    if ((edad>7)&&(edad<12)){
        cond = 2;
        }
    if ((edad>11)&&(edad<16)){
        cond = 3;
        }
    if ((edad>15)&&(edad<20)){
        cond = 4;
        }

switch(cond)
{
case 1:
    printf("\nEstas en el equipo AMARILLO");
    break;

    case 2:
    printf("\nEstas en el equipo NARANJA");
    break;

    case 3:
    printf("\nEstas en el equipo AZUL");
    break;

    case 4:
    printf("\nEstas en el equipo VERDE");
    break;

    default:
        printf("\nNo perteneces a ningun equipo\n");
}


    printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
    getch ();
    return 0 ;
}
