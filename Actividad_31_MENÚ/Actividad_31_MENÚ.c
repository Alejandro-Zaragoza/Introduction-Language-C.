/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza el siguiente programa, solo sales con la opcion 4, permanece en  el sub menu hasta regresar.
Segun la opcion seleccionada realizas la actividad con ee ciclo
*/

#include<stdio.h>
#include<conio.h>
int main ()
{
int c=1,i,num,num2,num3,pot,n=1,h=1;
char fo,wh,dow,r,cont,conta,resp;
int y,x=1,m,v,j;
int li,lf,li2,lf2,su;


do{

    printf("MEN%c\n1# FOR\n2# WHILE\n3# DO-WHILE\n4# SALIR\n",163);
    scanf("%i",&i);

  switch (i){
        case 1:
            do{ printf("\na)POTENCIA\nb)LISTA I-F\nc)REGRESAR\n");
                fflush(stdin);
                scanf("%c",&fo);

                    switch (fo){

                        case 'a':

                            printf("\nIngresa un n%cmero: ",163);
                            scanf("%i",&num);

                            printf("\nIngresa la potencia a la que lo quieres elevar: ");
                            scanf("%i",&pot);

                            printf("\nNum= %i  Pot=%i ",num,pot);
                                for (y=1;y<=pot;y++){

                                x=x*num;}

                                printf("Resultado = %d\n",x);


                            break;


                        case 'b':
                            printf("\nIngresa el n%cmero en que empieza la lista: ",163);
                            scanf("%i",&li);
                            printf("\nIngresa el n%cmero en que termina la lista: ",163);
                            scanf("%i",&lf);
                                for (m=li;m<=lf;m++){
                                printf(" %d ",m);
                                }
                                printf("\n");

                            break;

                        case 'c' :
                            break;

                        default :
                        printf("\nNo valido\n");

                        break;

                    }
                    }while(fo!='c');

        case 2:
             do{ printf("\na)SUMATORIA \nb)LISTA F-I\nc)REGRESAR\n");
                fflush(stdin);
                scanf("%c",&wh);
                        switch (wh){

                            case 'a':
                            printf("\nIngresa el n%cmero final de tu sumatoria: ",163);
                            scanf("%i",&su);
                            v=0;
                            j=0;
                            while(v<=su){
                                printf("%i",v);
                                j=j+v;
                                if(v<su)
                                printf("+");
                                v++;}
                            printf("= %i\n",j);

                            break;


                            case 'b':

                            printf("\nIngresa el n%cmero inicial de la lista: ",163);
                            scanf("%i",&li2);
                            printf("\nIngresa el n%cmero final de la lista: ",163);
                            scanf("%i",&lf2);
                            while(lf2>=li2){

                             printf(" %d ",lf2);

                             lf2--;
                            }


                            break;

                            case 'c' :
                            break;

                        default :
                        printf("\nNo valido\n");
                        break;

                    }
                    }while(wh!='c');

        case 3:
            do
            {printf("\na)FACTORIAL\nb)TABLA 10-1 \nc)REGRESAR\n");
                fflush(stdin);
                scanf("%c",&dow);
                switch(dow)
                {

                    case 'a':
                    printf("Ingreza un n%cmero: ",163);
                    scanf("%d",&num2);
                    r=num2;
                    cont=1;
                    num2=1;
                    do
                        {
                            num2=num2*cont;
                            cont++;
                        }
                        while(cont<=r);
                        printf("Factorial de %i = %i\n",r,num2);
                    break;

                    case 'b':
                    printf("Coloca tu n%cmero a multiplicar: ",163);
                    scanf("%i", &num3);
                    printf("\nLa tabla del %i es:", num3);
                    do
                    {
                        resp=num3*conta;
                        printf("\n %i * %i = %i",conta, num3, resp);
                        conta++;
                    }
                    while (conta<=10);
                    break;

                    case 'c':
                        break;
                }
                }while(dow!='c');

        case 4:
            c=2;
            break;

        default:
            c=1;
            break;
    }

}while(c!=2);

    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
