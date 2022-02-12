/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8

Utiliza el ciclo for para calcular y mostrar la potencia de un numero.
Solicita al usuario un numer y a que potencia lo desea.
Calcula y muestra de la siguiente manera:
EJEMPLO
num=2
pot=5
Imprime:
2*2*2*2*2=32
Presione s o S para otros valores
*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int num,pot,i,x=1;
    char c;


      do{
       printf("Ingresa un n%cmero: ",163);
       scanf("%i",&num);

       printf("\nIngresa la potencia a la que lo quieres elevar : ");
       scanf("%i",&pot);

        printf("\nNum= %i \nPot=%i \n\n",num,pot);

            for (i=1;i<=pot;i++){

            x=x*num;

            printf("%d",num);

            if(i<pot)
            printf(" * ");
            }


            printf(" = %d \n",x);
            x=1;

        printf("\nIngresa una S o s para otro n%cmero: ",163);
        fflush(stdin);
        scanf("%c",&c);

   }while( c=='S' || c=='s');



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
