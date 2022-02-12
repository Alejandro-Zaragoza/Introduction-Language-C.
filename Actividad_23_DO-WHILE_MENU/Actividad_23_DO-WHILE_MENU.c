/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utiliza un vector de 7 flotantesMENU DE VECTORES
1. CAPTURAR
2. MOSTRAR
3. BUSCAR
4. SUMAR VECTOR
5. SALIR
SELECCIONA UNA OPCION:_
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	float op, v[7], x, buscar, bandera;
	do
	{
		printf("\n VECTORES\n 1.CAPTURAR\n 2. MOSTRAR\n 3. BUSCAR\n 4. SUMAR VECTOR\n 5. SALIR\n SELECCIONA UNA OPCION: ");
		scanf("%f", &op);
		switch(op)
		{
			case 1:
				printf("\n CAPTURA 7 NUMEROS: ");
				for(x=0; x<7; x++)
					scanf("%f", &v[x]);
				break;
			case 2:
				printf("\n MOSTRAR ARREGLO: ");
				for(x=0; x<7; x++)
					printf("\n %f", v[x]);
				break;
			case 3:
				printf("\n BUSCAR VALOR\n CAPTURA NUMERO A BUSCAR: ");
				scanf("%f", &buscar);
				bandera=0;
				for(x=0; x<7; x++)
					if(buscar==v[x])
					{
						bandera=1;
						printf("\n Encontrado en %f ", x);
					}
				if(bandera==0)
					printf("\n NO SE ENCONTRO ");
				break;
			case 4:
				printf("\n SUMA DE VECTOR: ");

				break;
			case 5:
				printf("\n FIN DEL PROGRAMA \n");
				break;
			default: printf("\n OPCION INCORRECTA ");
		}
	}while(op!=5);



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
