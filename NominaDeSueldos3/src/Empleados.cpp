#include "Empleados.h"
#include "Usuario.h"
#include "Bitacora.h"
#include "Calculos.h"
#include <ctime>
#include <fstream>
#include <iomanip>
Bitacora llamarBitacora3;
Calculos boleta;
void Empleados::menuGeneralEmpleados(string n)
{
    system("cls");
    nombre = n;
    int choice2;
	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados  |"<<endl;
	cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t 1). Informacion personal laboral "<<endl;
	cout<<"\t\t\t 2). Procesos"<<endl;
	cout<<"\t\t\t 3). Informes"<<endl;
	cout<<"\t\t\t 4). LOG OUT"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice2;

        switch(choice2)
        {
            case 1:
                infopersonalEmpleados(nombre);
                break;
            case 2:
                procesoEmpleados(nombre);
                break;
            case 3:
                informesEmpleados(nombre);
                break;
            case 4:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
	system("cls");
    }while(choice2!= 4);
}
void Empleados::infopersonalEmpleados(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados - Informacion personal laboral - 900 |"<<endl;
	cout<<"\t\t\t--------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Informacion Personal "<<endl;
	cout<<"\t\t\t 2. Puesto en la empresa "<<endl;
	cout<<"\t\t\t 3. Procesos Diciplinarios "<<endl;
	cout<<"\t\t\t 4. Rendimiento "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                llamarBitacora3.ingresoBitacora(nombre,"900", "RIP");
                break;
            case 2:
                llamarBitacora3.ingresoBitacora(nombre,"900", "RPE");
                break;
            case 3:
                llamarBitacora3.ingresoBitacora(nombre,"900", "RPD");
                cout << "\t Funcion aun no disponible " << endl;
                system ("pause");
                break;
            case 4:
                llamarBitacora3.ingresoBitacora(nombre,"900", "RR");
                cout << "\t Funcion aun no disponible " << endl;
                system ("pause");
                break;
            case 5:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 5);
}
void Empleados::procesoEmpleados(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados -   Proceso - 1000  |"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Solicitar nuevo puesto "<<endl;
	cout<<"\t\t\t 2. Revisar procesos diciplinarios "<<endl;
	cout<<"\t\t\t 3. Solicitar horas extras "<<endl;
	cout<<"\t\t\t 4. Servicio de ayuda "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                llamarBitacora3.ingresoBitacora(nombre,"1000", "SNP");
                cout << "\t Debe presentar solicitud a oficina de recursos humanos y conocer ofertas " << endl;
                system ("pause");

                break;
            case 2:
                llamarBitacora3.ingresoBitacora(nombre,"1000", "RPD");
                cout << "\t Debe asistir a recursos humanos para realizar dicho proceso " << endl;
                system ("pause");
                break;
            case 3:
                llamarBitacora3.ingresoBitacora(nombre,"1000", "SHE");
                cout << "\t No hay horas extras disponibles " << endl;
                system ("pause");
                break;
            case 4:
                llamarBitacora3.ingresoBitacora(nombre,"1000", "SOS");
                cout << "\t Funcion aun no disponible " << endl;
                system ("pause");
                break;
            case 5:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 5);
}
void Empleados::informesEmpleados(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout<<"\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados -   Informes   - 1100|"<<endl;
	cout<<"\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. visualizar nomina de pago "<<endl;
	cout<<"\t\t\t 2. visualizar pagos extras "<<endl;
	cout<<"\t\t\t 3. Visualizar horas laboradas "<<endl;
	cout<<"\t\t\t 4. Visualizar descuentos aplicados "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                llamarBitacora3.ingresoBitacora(nombre,"1100", "VNP");
                boleta.verpago();

                break;
            case 2:
                llamarBitacora3.ingresoBitacora(nombre,"1100", "VPE");
                cout << "\t No hay horas extras disponibles " << endl;
                system ("pause");
                break;
            case 3:
                llamarBitacora3.ingresoBitacora(nombre,"1100", "VHL");
                cout << "\t Vista aun disponible " << endl;
                system ("pause");
                break;
            case 4:
                llamarBitacora3.ingresoBitacora(nombre,"1100", "VDA");
                cout<<"\t-------------------------------"<<endl;
                cout << "\tDescuesntos aplicados "  << endl;
                cout << "\t* descuento de IGSS  - " << endl;
                cout << "\t* descuento de IRTRA - " << endl;
                cout << "\t* descuento de ISR   - " << endl;
                cout<<"\t-------------------------------"<<endl;
                system ("pause");
                break;
            case 5:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 5);
}
