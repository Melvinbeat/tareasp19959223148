#include <iostream>
#include <cstdlib>

using namespace std;
void creditosModulo();
void infopersonalSTAFF();
void infopersonalempleados();
void procesoSTAFF();
void procesoempleados();
void informesSTAFF();
void informesempleados();
void ayudaSTAFF();
void menuGeneralSTAFF();
void menuGeneralEmpleados();
int main()
{
    int numero;
    do
    {

    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL   |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<< " ";
    cout<<"\t\t\t Seleccionar usuario "<<endl;
    cout<<"\t\t\t 1). Login Usuario STAFF "<<endl;
	cout<<"\t\t\t 2). Login Usuario Empleado "<<endl;
	cout<<"\t\t\t 3). Salir del Sistema"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<< " "<<endl;
	cout<<"\t\t\tingrese oppcion: ";
	cin>>numero;

	switch(numero)
	{
	    case 1:
	        menuGeneralSTAFF();
	        break;

	    case 2:
	        menuGeneralEmpleados();
	        break;

	    case 3:
	        break;
	    default:
            cout<<"\t\t\tIngrese opcion valida"<<endl;
            cin.get();
	}
      } while(numero!= 3);


return 0;
	}

void menuGeneralSTAFF(){
    system("cls");
    int choice1;

	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL STAFF |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1). Informacion personal laboral "<<endl;
	cout<<"\t\t\t 2). Procesos"<<endl;
	cout<<"\t\t\t 3). Informes"<<endl;
	cout<<"\t\t\t 4). Ayuda"<<endl;
	cout<<"\t\t\t 5). LOG OUT"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice1;

    switch(choice1)
    {
    case 1:
    		infopersonalSTAFF();

		break;
	case 2:
	    procesoSTAFF();
		break;
	case 3:
	    informesSTAFF();
		break;
	case 4:

		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
	system("cls");
    }while(choice1!= 5);

}
void menuGeneralEmpleados(){
    system("cls");
    int choice2;
	//char x;
	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados  |"<<endl;
	cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t 1). Informacion personal laboral "<<endl;
	cout<<"\t\t\t 2). Procesos"<<endl;
	cout<<"\t\t\t 3). Informes"<<endl;
	cout<<"\t\t\t 4). Ayuda"<<endl;
	cout<<"\t\t\t 5). LOG OUT"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice2;

    switch(choice2)
    {
    case 1:

    		infopersonalempleados();

		break;
	case 2:
	    procesoempleados();
		break;
	case 3:
	    informesempleados();

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
	system("cls");
    }while(choice2!= 5);
}
void infopersonalSTAFF(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL STAFF - Informacion personal laboral  |"<<endl;
	cout<<"\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Datos - Empleados "<<endl;
	cout<<"\t\t\t 2. Datos - puestos de trabajo "<<endl;
	cout<<"\t\t\t 3. Datos - Empleados amonestados "<<endl;
	cout<<"\t\t\t 4. Datos - Rendimiento "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);

}
void infopersonalempleados(){
    int choice;

    do {
	system("cls");
	cout<<"\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados - Informacion personal laboral  |"<<endl;
	cout<<"\t\t\t----------------------------------------------------------"<<endl;
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

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);

}
void procesoSTAFF(){
    int choice;

    do {
	system("cls");
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL STAFF -   Proceso   |"<<endl;
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Crear y eliminar accion Diciplinaria "<<endl;
	cout<<"\t\t\t 2. Actualizar puestos de trabajo "<<endl;
	cout<<"\t\t\t 3. Revisar observaciones "<<endl;
	cout<<"\t\t\t 4. Editar rendimiento de empelado "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);

}
void procesoempleados(){
    int choice;

    do {
	system("cls");
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados -   Proceso   |"<<endl;
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Solicitar nuevo puesto "<<endl;
	cout<<"\t\t\t 2. revisar procesos diciplinarios "<<endl;
	cout<<"\t\t\t 3. solicitar horas extras "<<endl;
	cout<<"\t\t\t 4. Enviar observacion "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);

}
void informesSTAFF(){
    int choice;

    do {
	system("cls");
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL STAFF -   Informes   |"<<endl;
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t 1. aprobar pago a empleado "<<endl;
	cout<<"\t\t\t 2. revisar y aprobar horas extra "<<endl;
	cout<<"\t\t\t 3. revisar horas laboradas "<<endl;
	cout<<"\t\t\t 4. Enviar observacion a trabajador "<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);

}
void informesempleados(){
    int choice;

    do {
	system("cls");
	cout<<"\t\t\t-----------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL Empleados -   Informes   |"<<endl;
	cout<<"\t\t\t-----------------------------------------------"<<endl;
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

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);

}
