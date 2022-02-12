/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Con la estructura, crea un arreglo de 7 alumnos, captura de 1x1 utiliza el siguiente menú:
1. CAPTURAR
2. MOSTRAR
3. BUSCAR CÓDIGO
4. BUSCAR POR CARRERA
5. PROMEDIO POR CARRERA
6. PROMEDIO GENERAL
7. SALIR
SELECCIONE UNA OPCIÓN:_
Utiliza funciones para cada casi... En él caso de buscar por código manda como parámetro el código a buscar.
Cualquier otra opción es invalida, solo sale con la opción 7
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define p printf
#define s scanf

int posicion=-1;
struct alumno
{
    int codigo,registro;
    char nombre[20], apaterno[20], amaterno[20], carrera[20], materia[3][20];
    float promedio;

}x[7];
/*Se puede declarar una variable tipo estructura entre la llave de cierre y el punto y coma,
en ese caso la variable seria Grobal */
void capturar()
{

if(posicion==6)
    {
        printf("\n LLeno");
    }
    else
    {
        posicion++;
    printf("\n Captura el registro: ", posicion+1);scanf("%i", &x[posicion].registro);
    printf("\n Captura el nombre: ");scanf("%s", &x[posicion].nombre);
    printf("\n Captura el apellido paterno: ");scanf("%s", &x[posicion].apaterno);
    printf("\n Captura el apellido materno: ");scanf("%s", &x[posicion].amaterno);
    printf("\n Captura la carrera: ");scanf("%s", &x[posicion].carrera);
    printf("\n Captura el promedio: ");scanf("%f", &x[posicion].promedio);
    for(int j=0;j<3;j++)
    {
        printf("\nCaptura la materia del alumno [%i]: ", j+1);scanf("%s", &x[posicion].materia[j]);
    }
    }
}
   void mostrar()
{
    int y,j;
    if(posicion==-1)
       {
         printf("\n*El sistema esta vacio*\n");
       }
        else
        {
             for(y=0;y<=posicion;y++)
            {

              printf("\n Registro: %i", x[y].registro);
              printf("\n Nombre: %s", x[y].nombre);
              printf(" %s", x[y].apaterno);printf(" %s", x[y].amaterno);
              printf("\n Carrera: %s", x[y].carrera);
              printf("\n Promedio: %.1f", x[y].promedio);
             for(int j=0;j<3;j++)
             {
             printf("\n Materias del alumno [%i]: %s", j+1, x[y].materia[j]);
             }
             printf("\n*****");
             }
        }
}
void buscar_c ()
{
  int bandera,buscar,y;
  printf("\nIngresa registro a buscar: ");
  fflush(stdin);
  scanf("%i",&buscar);
  bandera==0;

  for (y=0;y<7;y++)
   if (buscar==x[y].registro)
    {bandera=1;
     printf("\n Registro: %i", x[y].registro);
     printf("\n Nombre: %s", x[y].nombre);
     printf(" %s", x[y].apaterno);
     printf(" %s", x[y].amaterno);
     printf("\n Carrera: %s", x[y].carrera);
     printf("\n Promedio: %.1f", x[y].promedio);
             for(int j=0;j<3;j++)
             {
             printf("\n Materias del alumno [%i]: %s", j+1, x[y].materia[j]);
             }
             printf("\n*********");
    }
    if (bandera==0)
     printf("\n NO SE ENCONTRO\n");
}
void buscar_carrera ()
{
  int bandera,y;
  char buscarcarrera[20];
  printf("\nIngresa la carrera a buscar : ");
  fflush(stdin);
  scanf("%s",&buscarcarrera);
  bandera==0;

  for (y=0;y<7;y++)
   if (buscarcarrera==x[y].carrera)
    {bandera=1;
     printf("\n Registro: %i", x[y].registro);
     printf("\n Nombre: %s", x[y].nombre);
     printf(" %s", x[y].apaterno);
     printf(" %s", x[y].amaterno);
     printf("\n Carrera: %s", x[y].carrera);
     printf("\n Promedio: %.1f", x[y].promedio);
             for(int j=0;j<3;j++)
             {
             printf("\n Materias del alumno [%i]: %s", j+1, x[y].materia[j]);
             }
             printf("\n*********");
    }
    if (bandera==0)
     printf("\n NO SE ENCONTRO\n");
}
void promediomateria()
{

}
void  promediog()
{

}
int main (){
int op;
do{
p("\n*****DATOS DE ALUMNO *****\n");
p("\n1. CAPTURAR \n2. MOSTRAR \n3. BUSCAR CODIGO\n4. BUSCAR POR CARRERA\n5. PROMEDIO POR CARRERA\n6. PROMEDIO GENERAL\n7. SALIR\nOpcion:");
s("%d", &op);
switch(op)
{
case 1:
    capturar();
    break;
case 2:
    mostrar();
    break;
case 3:
    buscar_c();
    break;
case 4:
    bcarrera();
    break;
case 5:
    promediomateria();
    break;
case 6:
    promediog();
    break;
case 7:
    p("\nFin del programa");
    break;

default:
    p("\nOpcion Invalida");
}
}while(op!=7);

    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
