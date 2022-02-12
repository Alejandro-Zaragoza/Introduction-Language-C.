/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el codigo en C, para solicitar al usuario su contraseña,
 si la contraseña es 1212, imprime Bienvenido, si no, imprime Rechazado
*/

#include<stdio.h>
#include<conio.h>

int main() {

int contrasena;

printf("Digite su contrase%ca: ",164);
scanf("%i",&contrasena);

if(contrasena==1212)
{
    printf("\nBienvenido");
}

else
{
    printf("\nRECHAZADO");
}


printf("\n");
printf("\nRealizado por Daniel Zepeda");

getch ();
return 0;


}
