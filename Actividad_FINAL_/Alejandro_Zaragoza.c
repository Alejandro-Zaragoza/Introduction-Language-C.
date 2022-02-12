
//Zepeda Zaragoza Daniel Alejandro

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define p printf
#define s scanf

int posicion=0,posicion_s=0;



struct socio
{
    int IDsocio, IDempleado,IDahorro,IDpago,IDprestamo,IDretiro,fecha,cantidadprestamos;
    char nombre_e[20], paterno_e[20], materno_e[20], contras_e[6],area[20],usuario[20];
    char nombre_s[20], paterno_s[20], materno_s[20];
    float ahorro, saldo, prestamo, pago;

}x[50];

void gerente()
{
    int op, op2,op5, tsocios, ID, y, j, b, n,n1, buscarc, numero,cuenta=0, cuenta2=0, cuenta3=0;
    char buscar[20], cad1[20], cad2[6];
    float cuentapesos,cuentapesos2;
    int id_s, m=0;

    do
    {
    p("\n---EMPLEADOS---\n");
    p("1.NUEVO.\n2.MOSTRAR TODOS.\n3.BUSCAR POR CODIGO.\n4.BUSCAR POR APELLIDO PATERNO.\n5.MODIFICAR.\n6.ELIMINAR\n7.REPORTES\n8.CAMBIAR USUARIO.\n");
    s("%i", &op);
    switch(op)
    {
    case 1:
        if(posicion==50)
    {
        printf("\nLLENO");
    }
    else
    {
        posicion++;
        p("\nCaptura el ID de empleado: ", posicion+1); s("%i", &x[posicion].IDempleado);
        p("\nCaptura el Nombre: "); s("%s", &x[posicion].nombre_e);
        p("\nCaptura el Apellido Paterno: "); s("%s", &x[posicion].paterno_e);
        p("\nCaptura el Apellido Materno: "); s("%s", &x[posicion].materno_e);
        p("\nCaptura el %crea: ",181); s("%s", &x[posicion].area);
        p("\nCaptura el usuario: "); s("%s", &x[posicion].usuario);

        numero=rand()%11;
        strncpy(x[posicion].contras_e, x[posicion].paterno_e,2);
        strncat(x[posicion].contras_e, x[posicion].nombre_e,1);
        p("\nLa contrase%ca sera: %s%i", 164, x[posicion].contras_e, numero);
        p("\nConfirma la contrase%ca: ", 164);
        s("%s", &x[posicion].contras_e);
    }
        break;
    case 2:
         if(posicion==0)
       {
         p("\n*EL SISTEMA ESTA VACIO*\n");
       }
        else
        {
             for(y=1;y<=posicion;y++)
            {
              p("\n ID: %i", x[y].IDempleado);
              p("\n Nombre: %s", x[y].nombre_e);
              p(" %s", x[y].paterno_e);
              p(" %s", x[y].materno_e);
              p("\n %s", x[y].area);
              p("\n Usuario: %s", x[y].usuario);
              p("\n Contrase%ca: %s\n",164, x[y].contras_e);
             }
        }
        break;

    case 3:
        p("Igrese el ID a buscar: ");
        s("%i", &ID);
        b=0;
        for (y=0;y<50;y++)
            if (ID==x[y].IDempleado)
            {
                b=1;
                p("\n ID: %i", x[y].IDempleado);
                p("\n Nombre: %s", x[y].nombre_e);
                p(" %s", x[y].paterno_e);
                p(" %s", x[y].materno_e);
                p("\n %s", x[y].area);
                p("\n Usuario: %s", x[y].usuario);
                p("\n Contrase%ca: %s\n",164, x[y].contras_e);
            }
            if(b==0)
                p("\n ID NO ENCONTRADO\n");
        break;

    case 4:
        p("Igrese el apellido a buscar: ");
        s("%s", &buscar);
        b=0;
        for (y=0;y<50;y++)
            if (strcmp(buscar,x[y].paterno_e)==0)
            {
                b=1;
                p("\n ID: %i", x[y].IDempleado);
                p("\n Nombre: %s", x[y].nombre_e);
                p(" %s", x[y].paterno_e);
                p(" %s", x[y].materno_e);
                p("\n %s", x[y].area);
                p("\n Usuario: %s", x[y].usuario);
                p("\n Contrase%ca: %s\n",164, x[y].contras_e);
            }
            if(b==0)
                p("\n EMPLEADO NO ENCONTRADO\n");
        break;

    case 5:
        modificar();
        break;

    case 6:
        eliminar();

        break;

    case 7:
        do{
        p("\n1.TOTAL AHORROS.\n2.TOTAL PRESTAMOS.\n3.TOTAL SOCIOS.\n4.CANTIDAD DE PRESTAMO POR SOCIO.\n5.SALIR\n");
        s("%i", &op5);
        switch(op5)
        {

       case 1:

        for(y=1;y<=posicion_s;y++){

            if(x[y].ahorro!=0)
            {
                cuenta++;
                cuentapesos = cuentapesos + x[y].ahorro;

            }
        }

        p("\n Total de ahorros: %i\n Total ahorrado: $ %.1f\n",cuenta,cuentapesos);


        break;


       case 2:
                for(y=0;y<=posicion_s;y++){

            if(x[y].prestamo!=0)
            {
                cuenta2++;
                cuentapesos2 = cuentapesos2 + x[y].prestamo;

            }
        }

        p("\n Total de prestamos: %i\n Total dinero prestado: $ %.1f\n",cuenta2,cuentapesos2);

        break;


       case 3:
            for(y=0;y<=50;y++){

            if(x[y].IDsocio!=0)
            {
                cuenta3++;

            }
        }
        p("\nTotal de socios: %i\n",cuenta3);

        break;


        case 4:
             do{
            p("\n ID Socio a buscar : ");
            s("%i",&id_s);

            m=0;
            for (y=0;y<50;y++){
                if (id_s==x[y].IDsocio)
                {
                    m=1;

                    p("\n Nombre: %s", x[y].nombre_s);
                    p(" %s", x[y].paterno_s);
                    p(" %s", x[y].materno_s);
                    p("\ncantidad de prestamos solicitados %i\n",x[y].cantidadprestamos);
                    break;}}


                    if(m==0)
                        p("\n Socio no encontrado\n");


            }while(m!=1);



            break;


       case 5:
        break;
        }

        }while(op5!=5);
        break;
    case 8:
        break;
    default:
        p("OPCION INVALIDA");
    }
    }while(op!=8);
}

void modificar()
{

    int buscarc, op2, b, y;
    char cad1[20], cad2[6];
     do
        {
            p("\nIngrese el ID del empleado: ");
            s("%i",&buscarc);
            b=0;
            for (y=0;y<50;y++)
                if (buscarc==x[y].IDempleado)
                {
                    b=1;
                    p("\n ID: %i", x[y].IDempleado);
                    p("\n Nombre: %s", x[y].nombre_e);
                    p(" %s", x[y].paterno_e);
                    p(" %s", x[y].materno_e);
                    p("\n %s", x[y].area);
                    p("\n Usuario: %s", x[y].usuario);
                    p("\n Contrase%ca: %s\n",164, x[y].contras_e);

                    p("\n1.NOMBRE.\n2.CONTRASE%cA.\n3.REGRESAR.\n", 165);
                    s("%i", &op2);
                    switch(op2)
                    {
                        case 1:
                            p("\nIngrese el nuevo nombre: ");
                            s("%s", &cad1);
                            strcpy(x[y].nombre_e,cad1);
                            p("\nNombre modificado: %s %s %s", x[y].nombre_e,x[y].paterno_e,x[y].materno_e);
                            op2=3;
                            break;

                            case 2:
                                p("\nIngrese la nueva contrase%ca: ", 164);
                                s("%s", &cad2);
                                strcpy(x[y].contras_e,cad2);
                                p("\nContrase%ca modificada: %s",164, x[y].contras_e);
                                op2=3;
                                break;

                                case 3:
                                    p("\nFIN DE MODIFICACIONES\n");
                                    break;

                                    default:
                                        p("OPCION INVALIDA");
                    }
                }

            if(b==0)
            p("\n ID NO ENCONTRADO\n");

            }while(op2!=3);


}

void eliminar ( )
{
    int buscarc, op2, b, y, confirmacion,h;
    char cad1[20], cad2[6];

            p("\nIngrese el ID del empleado: ");
            s("%i",&buscarc);
            b=0;

            for (y=0;y<posicion;y++)
                if (buscarc==x[y].IDempleado)
                {
                    b=1;
                    h=y;
                    p("\n ID: %i", x[y].IDempleado);
                    p("\n Nombre: %s", x[y].nombre_e);
                    p(" %s", x[y].paterno_e);
                    p(" %s", x[y].materno_e);
                    p("\n %s", x[y].area);
                    p("\n Usuario: %s", x[y].usuario);
                    p("\n Contrase%ca: %s\n",164, x[y].contras_e);
                    break;
                }

            if(b==1){
                p("\nDesea eliminar el empleado\n1#SI        2#No\n");
            s("%i",&confirmacion);

            switch(confirmacion)
            {

            case 1:
                for(;h<=posicion;h++){

                    x[h].IDempleado = x[h+1].IDempleado;
                    strcpy(x[h].nombre_e,x[h+1].nombre_e);
                    strcpy(x[h].paterno_e,x[h+1].paterno_e);
                    strcpy(x[h].materno_e,x[h+1].materno_e);
                    strcpy(x[h].area,x[h+1].area);
                    strcpy(x[h].usuario,x[h+1].usuario);
                    strcpy(x[h].contras_e,x[h+1].contras_e);

                posicion--;}
                break;

            case 2:
                confirmacion=2;
                break;

            default:
                p("\n*Confirmaci%cn inv%clida*\n",162,160);
            }}
           else{
            p("\nID no encontrado\n");
            getch();
           }
}

void socios()
{
    int op,ID, y, j, b;
    do
    {
        p("\n1.CAPTURAR.\n2.MOSTRAR.\n3.BUSCAR.\n4.MODIFICAR.\n5.ELIMINAR.\n6.SALIR.\n");
        s("%i", &op);
        switch(op)
        {
        case 1:
             if(posicion_s==50)
                {
                    printf("\nLLENO\n");
             }
             else
                {
                    posicion_s++;
                    p("\nCaptura el ID de socio: ", posicion_s); s("%i", &x[posicion_s].IDsocio);
                    p("\nCaptura el Nombre: "); s("%s", &x[posicion_s].nombre_s);
                    p("\nCaptura el Apellido Paterno: "); s("%s", &x[posicion_s].paterno_s);
                    p("\nCaptura el Apellido Materno: "); s("%s", &x[posicion_s].materno_s);
                    x[posicion_s].ahorro= 200;
                    x[posicion_s].saldo=0;
                    x[posicion_s].prestamo=0;
                    x[posicion_s].pago=0;
                    x[posicion_s].cantidadprestamos=0;
                }
             break;

        case 2:
            if(posicion_s==0)
                {
                    p("\n*EL SISTEMA ESTA VACIO*\n");
            }
            else
                {
                    for(y=1;y<=posicion_s;y++)
                    {
                        p("\n ID: %i", x[y].IDsocio);
                        p("\n Nombre: %s", x[y].nombre_s);
                        p(" %s", x[y].paterno_s);
                        p(" %s", x[y].materno_s);
                        p("\n Ahorro: %.2f", x[y].ahorro);
                        p("\n Saldo: %.2f\n", x[y].saldo);
                    }
                }
            break;
        case 3:
             p("\n Igrese el ID a buscar: ");
             s("%i", &ID);
             b=0;
             for (y=0;y<50;y++)
                if (ID==x[y].IDsocio)
                {
                    b=1;
                    p("\n ID: %i", x[y].IDsocio);
                    p("\n Nombre: %s", x[y].nombre_s);
                    p(" %s", x[y].paterno_s);
                    p(" %s", x[y].materno_s);
                    p("\n Ahorro: %.2f", x[y].ahorro);
                    p("\n Saldo: %.2f\n", x[y].saldo);
                }
                if(b==0)
                    p("\n ID NO ENCONTRADO\n");
            break;
        case 4:
            modificar_s();
            break;
        case 5:
            eliminar_s();
            break;

        case 6:
            p("\nRegresando...\n");
            break;
        default:
            p("\nOPCION INVALIDA\n");
        }

    }while(op!=6);
}

void modificar_s()
{
  int buscarc, op2, b, y;
    char cad1[20], cad2[6];
     do
        {
            p("\nIngrese el ID del socio: ");
            s("%i",&buscarc);
            b=0;
            for (y=0;y<50;y++)
                if (buscarc==x[y].IDsocio)
                {
                    b=1;
                    p("\n ID: %i", x[y].IDsocio);
                    p("\n Nombre: %s", x[y].nombre_s);
                    p(" %s", x[y].paterno_s);
                    p(" %s", x[y].materno_s);
                    p("\n Ahorro: %.2f", x[y].ahorro);
                    p("\n Saldo: %.2f", x[y].saldo);
                    p("\n¿DESEA MODIFICAR EL NOMBRE? \n1.SI        2.NO\n");
                    s("%i", &op2);
                    switch(op2)
                    {
                        case 1:
                            p("\nIngrese el nuevo nombre: ");
                            s("%s", &cad1);
                            strcpy(x[y].nombre_s,cad1);
                            p("\nNombre modificado: %s %s %s", x[y].nombre_s,x[y].paterno_s,x[y].materno_s);
                            op2=2;
                            break;

                        case 2:
                            p("FIN DE MODIFICACIONES");
                            break;

                        default:
                            p("OPCION INVALIDA");
                    }
                }

            if(b==0)
            p("\n ID NO ENCONTRADO\n");

            }while(op2!=2);
}

void eliminar_s()
{
    int buscarc, op2, b, y, confirmacion,h;
    char cad1[20], cad2[6];

            p("\nIngrese el ID del socio: ");
            s("%i",&buscarc);
            b=0;


            for (y=0;y<50;y++)
                if (buscarc==x[y].IDsocio)
                {
                    b=1;
                    h=y;
                    p("\n ID: %i", x[y].IDsocio);
                    p("\n Nombre: %s", x[y].nombre_s);
                    p(" %s", x[y].paterno_s);
                    p(" %s", x[y].materno_s);
                    p("\n Ahorro: %.2f", x[y].ahorro);
                    p("\n Saldo: %.2f", x[y].saldo);
                    break;
                }

            if(b==1){

                p("\nDesea eliminar el socio\n1#SI        2#No\n");
                    s("%i",&confirmacion);

            switch(confirmacion)
            {

            case 1:
                for(;h<=posicion_s;h++){

                    x[h].IDsocio = x[h+1].IDsocio;
                    strcpy(x[h].nombre_s,x[h+1].nombre_s);
                    strcpy(x[h].paterno_s,x[h+1].paterno_s);
                    strcpy(x[h].materno_s,x[h+1].materno_s);
                    x[h].ahorro = x[h+1].ahorro;
                    x[h].saldo = x[h+1].saldo;

                posicion_s--;}
                break;

            case 2:
                confirmacion=2;
                break;

            default:
                p("\n*Confirmaci%cn inv%clida*\n",162,160);
            }}
           else{
            p("\nID no encontrado\n");
            getch();
           }
}

void empleado ( )
{
    int op3, mod;
    int id_e, id_s, y, b,m;
    float ahorro2, monto, monto2, pago,retiro,condicional;

 do
    {
    p("\n---SOCIOS---\n");
    p("\n1.SOCIOS.\n2.AHORRO.\n3.P%cSTAMO.\n4.PAGOS.\n5.RETIRO.\n6.CAMBIAR DE USUARIO\n",144);
    s("%i", &op3);

    switch(op3){


        case 1:
            socios();
            break;

        case 2:

            do{
            p("\n ID EMPLEADO: ");
            s("%i",&id_e);

            b=0;
            for (y=0;y<50;y++){
                if (id_e==x[y].IDempleado)
                {
                    b=1;

                    p("\n Nombre: %s", x[y].nombre_e);
                    p(" %s", x[y].paterno_e);
                    p(" %s", x[y].materno_e);
                    p("\n %s", x[y].area);
                    p("\n Usuario: %s", x[y].usuario);}}


                    if(b==0)
                        p("\nEmpleado no encontrado\n");

            }while(b!=1);

            do{
            p("\n ID Socio: ");
            s("%i",&id_s);

            m=0;
            for (y=0;y<50;y++){
                if (id_s==x[y].IDsocio)
                {
                    m=1;

                    p("\n Nombre: %s", x[y].nombre_s);
                    p(" %s", x[y].paterno_s);
                    p(" %s", x[y].materno_s);
                    break;}}


                    if(m==0)
                        p("\n Socio no encontrado\n");


            }while(m!=1);

            p("\n ID AHORRO: ");
            s("%i",&x[y].IDahorro);
            p("\n FECHA: ");
            s("%i",&x[y].fecha);

            p("\n Cuanto dinero desea agregar al ahorro: ");
            s("%f",&ahorro2);

            x[y].ahorro=x[y].ahorro + ahorro2;
            p("\n Total de ahorro: %.2f", x[y].ahorro);


            break;

        case 3:
             do{
                    p("\n ID EMPLEADO: ");
                    s("%i",&id_e);
                    b=0;
                    for (y=0;y<50;y++){
                        if (id_e==x[y].IDempleado)
                        {
                            b=1;
                            p("\n Nombre: %s", x[y].nombre_e);
                            p(" %s", x[y].paterno_e);
                            p(" %s", x[y].materno_e);
                            p("\n %s", x[y].area);
                            p("\n Usuario: %s", x[y].usuario);}}

                                if(b==0)
                                p("\n Empleado no encontrado\n");

                }while(b!=1);
                do{
                        p("\n ID Socio: ");
                        s("%i",&id_s);
                        m=0;
                        for (y=0;y<50;y++){
                            if (id_s==x[y].IDsocio)
                            {
                                m=1;
                                p("\n Nombre: %s", x[y].nombre_s);
                                p(" %s", x[y].paterno_s);
                                p(" %s", x[y].materno_s);
                                p("\n Prestamo: %.2f", x[y].prestamo);
                                break;}}


                                    if(m==0)
                                    p("\n Socio no encontrado\n");

                  }while(m!=1);
            if(x[y].saldo==0)
            {
                p("\n ID PRESTAMO: ");
                s("%i",&x[y].IDprestamo);
                p("\n FECHA: ");
                s("%i",&x[y].fecha);
                p("\n Monto del prestamo: ");
                s("%f", &monto);
                monto2=monto+(monto*0.10);
                if (monto2<x[y].ahorro)
                {
                p("\n Modalidad de pago\n 1.6 meses.\n2.12 meses");
                s("%i", &mod);
                x[y].prestamo=monto2;
                x[y].saldo = x[y].prestamo;

                switch(mod)
                {
                    case 1:
                        x[y].pago=monto2/6;
                        p("\n Su pago mensual sera de %.2f durante 6 meses",x[y].pago);
                        break;
                    case 2:
                        x[y].pago=monto2/12;
                        p("\n Su pago mensual sera de %.2f durante 12 meses", x[y].pago);
                        break;
                }
                x[y].cantidadprestamos++;
            }
            else p("\n EL PRESTAMO NO DEBE SER MAYOR DE LO AHORRADO\n");
            }
            else
                    p("\n No es posible tener mas de un prestamo activo\n");



            break;


        case 4:

            do{
               p("\n ID EMPLEADO: ");
                    s("%i",&id_e);
                    b=0;
                    for (y=0;y<50;y++){
                        if (id_e==x[y].IDempleado)
                        {
                            b=1;
                            p("\n Nombre: %s", x[y].nombre_e);
                            p(" %s", x[y].paterno_e);
                            p(" %s", x[y].materno_e);
                            p("\n %s", x[y].area);
                            p("\n Usuario: %s", x[y].usuario);}}

                                if(b==0)
                                p("\n Empleado no encontrado\n");

                }while(b!=1);
                do{
                        p("\n ID Socio: ");
                        s("%i",&id_s);
                        m=0;
                        for (y=0;y<50;y++){
                            if (id_s==x[y].IDsocio)
                            {
                                m=1;
                                p("\n Nombre: %s", x[y].nombre_s);
                                p(" %s", x[y].paterno_s);
                                p(" %s", x[y].materno_s);
                                p("\n Prestamo: %.2f", x[y].saldo);
                                break;}}

                                        if(m==0)
                                        p("\n Socio no encontrado\n");

                  }while(m!=1);

            if(x[y].saldo!=0)
            {
                p("\n ID PAGO: ");
                s("%i",&x[y].IDpago);
                p("\n FECHA: ");
                s("%i",&x[y].fecha);
                p("\n Cantidad a pagar: ");s("%f",&x[y].pago);
                x[y].saldo=x[y].saldo - x[y].pago;
                p("\n Restante a pagar: %.2f", x[y].saldo);
            }
            else
                    p("\nNO EXISTE PRESTAMO A PAGAR\n");
            break;

        case 5:
             do{
               p("\n ID EMPLEADO: ");
                    s("%i",&id_e);
                    b=0;
                    for (y=0;y<50;y++){
                        if (id_e==x[y].IDempleado)
                        {
                            b=1;
                            p("\n Nombre: %s", x[y].nombre_e);
                            p(" %s", x[y].paterno_e);
                            p(" %s", x[y].materno_e);
                            p("\n %s", x[y].area);
                            p("\n Usuario: %s", x[y].usuario);}}

                                    if(b==0)
                                    p("\nEmpleado no encontrado\n");

                }while(b!=1);
                do{
                        p("\n ID Socio: ");
                        s("%i",&id_s);
                        m=0;
                        for (y=0;y<50;y++){
                            if (id_s==x[y].IDsocio)
                            {
                                m=1;
                                p("\n Nombre: %s", x[y].nombre_s);
                                p(" %s", x[y].paterno_s);
                                p(" %s", x[y].materno_s);
                                p("\n AHORRO: %.2f", x[y].ahorro);
                                break;}}

                                    if(m==0)
                                    p("\nSocio no encontrado\n");

                  }while(m!=1);

                p("\n ID RETIRO: ");
                s("%i",&x[y].IDretiro);
                p("\n FECHA: ");
                s("%i",&x[y].fecha);
                p("\n CANTIDAD QUE DESEA RETIRAR: ");
                s("%f", &retiro);
                condicional = (x[y].ahorro* 0.80);
                  if(retiro<=condicional){
                        x[y].ahorro = x[y].ahorro - retiro;
                        p("\n CANTIDAD RESTANTE EN EL AHORRO:  %.2f",x[y].ahorro);

                  }
                  else{
                    p("\nEL MONTO EXCEDE LA CANTIDAD MAXIMA PERMITIDA\n");
                  }
            break;

        case 6:
            break;

        default:
            p("Opci%n inv%clida",162,160);

    }}while(op3!=6);
}


int main()
{
    system("color F1");
    int op,con=0, y, b;
    char usu[20], contr[10], contrag[10],contra[10];

    contrag=='1212';
    do
    {

        p("\n-----MENU PRINCIPAL-----\n");
        p("\n1.INICIO.\n2.SALIR.\n");
        s("%i",&op);
        switch(op)
        {

        case 1:
            do{

            p("\nINGRESE EL USUARIO: ");
            s("%s", &usu);

            p("INGRESE LA CONTRASE%cA: ", 165);
            s("%s",&contra);


            if(strcmp(usu,"gerente")==0)
            {
                gerente();
            }
                else{
                    b=0;
                    for (y=0;y<50;y++){
                        if(  strcmp(usu,x[y].usuario)==0 && strcmp(contra,x[y].contras_e)==0)
                            b=1;}

                        if(b==1){
                            empleado ();
                            }

                        if(b==0){
                            p("\nUSUARIO O CONTRASE%cA INVALIDA\n", 165);
                            con=con+1;}}

            }while(con<3);
            break;
        case 2:
            p("FIN DEL PROGRAMA");
            break;
        }
    }while(op!=2);

    getch ();
    return 0 ;
}
