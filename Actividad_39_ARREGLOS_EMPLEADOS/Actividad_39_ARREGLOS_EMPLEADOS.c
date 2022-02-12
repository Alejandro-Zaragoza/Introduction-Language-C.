/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa para registrar y mostrar los datos de las ventas de los empleados de una empresa, puedes poerle nombre a la empresa.
MENU
1. CAPTURAR
2. MOSTRAR
3. BUSCAR POR CÓDIGO
4. SALIR

Se captura solo un empleado con todos sus datos
Muestra a cada empleado registrado con todos sus datos
Temina con la opcion 4, cualquier otra opcion es INVALIDA
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char empleados[7][10];
    int codigo[7];
    float enero[7], febrero[7], marzo[7];
    int c,i,cont=0,buscar,x;

    do{
        printf("1.CAPTURAR\n2.MOSTRAR\n3.BUSCAR POR CODIGO\n4.SALIR\n");
        scanf("%i",&c);

        switch(c){

        case 1:
        if(cont<7){
            cont++;

            printf("\nCaptura el nombre del empeado :");
            scanf("%s",&empleados[cont]);

            printf("\nCaptura el codigo del empeado :");
            scanf("%i",&codigo[cont]);

            printf("\nCaptura sus ventas en Enero :");
            scanf("%f",&enero[cont]);

            printf("\nCaptura sus ventas en Febrero :");
            fflush(stdin);
            scanf("%f",&febrero[cont]);

            printf("\nCaptura sus ventas en Marzo :");
            fflush(stdin);
            scanf("%f",&marzo[cont]);


            }
        else
            printf("\nLLENO\n");

        break;

        case 2:
            if(cont>0){

                for(i=0;i<cont;i++){

                printf("\n%s  codigo: %i  Enero: %.2f  Febrero: %.2f  Marzo: %.2f",empleados[i],codigo[i],enero[i],febrero[i],marzo[i]);
                printf("\n");}


            }
            else
                printf("\nVACIO\n");

            printf("\n");

        break;


        case 3:
            x=0;
            printf("Ingresa el codigo del empleado a buscar: ");
            scanf("%i",&buscar);


        for(i=0;i<cont;i++){

            if(codigo[i]==buscar){
                x=1;
                break;
            }

        }
        if(x==1){
        printf("\n%s  codigo: %i  Enero: %.2f  Febrero: %.2f  Marzo: %.2f",empleados[i],codigo[i],enero[i],febrero[i],marzo[i]);
        printf("\n");}

        else printf("\nNo encontrado\n");

        break;


        case 4:
        printf("FIN DEL PROGRAMA");
        break;
        }





    }while(c!=4);


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
