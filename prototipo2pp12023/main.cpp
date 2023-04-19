#include <iostream>
#include <cstdlib>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Usuario.h"
using namespace std;
void loginadministrador();
void logininvitado ();
void catalogos ();
void informes ();
int main()
{
    //Usuario ingresoUsuario;
    Usuario ingresoUsuario;

    int numero;
    do
    {

    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t  Autentificacion de Usuarios  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<< " ";
    cout<<"\t\t\t Seleccionar usuario "<<endl;
    cout<<"\t\t\t 1). Login Usuario Administrador "<<endl;
	cout<<"\t\t\t 2). Login Usuario Creado "<<endl;
	cout<<"\t\t\t 3). Salir del Sistema"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<< " "<<endl;
	cout<<"\t\t\tingrese oppcion: ";
	cin>>numero;

	switch(numero)
	{
	    case 1:
	        loginadministrador();
	        break;

	    case 2:
	        ingresoUsuario.iniciarSesion();

	        logininvitado();
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


void logininvitado(){
    system("cls");
    int choice1;

	do
    {
	system("cls");
	cout<<"\t\t\t Melvin  Alberto Gonzalez Vasquez "<<endl;
    cout<< "\t\t\t carnet: 9959 - 22 - 3148    "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |        MENU PRINCIPAL      |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1). Catalogos  "<<endl;
	cout<<"\t\t\t 2). Informes "<<endl;
	cout<<"\t\t\t 3). Salir del sistema - LOG OUT "<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice1;

    switch(choice1)
    {
    case 1:
    		catalogos();
		break;
	case 2:
	    informes();
		break;
	case 3:
		break;

	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
	system("cls");
    }while(choice1!= 3);

}

void catalogos(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t |      CATALOGOS        |"<<endl;
	cout<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t 1. Altas "<<endl;
	cout<<"\t\t\t 2. BAJAS "<<endl;
	cout<<"\t\t\t 3. MODIFICACIONES "<<endl;
	cout<<"\t\t\t 4. CONSULTA "<<endl;
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
void informes(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t |      INFORMES        |"<<endl;
	cout<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t 1. INFORME - Altas "<<endl;
	cout<<"\t\t\t 2. INFORME - Bajas "<<endl;
	cout<<"\t\t\t 3. INFORME - Modificaciones "<<endl;
	cout<<"\t\t\t 4. CONSULTA "<<endl;
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
void loginadministrador(){
    system("cls");
    int choice2;
	//char x;
	do
    {
    Usuario ingresoUsuario;
	system("cls");
	cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t |   LOGIN ADMINISTRADOR  |"<<endl;
	cout<<"\t\t\t-------------------------------------"<<endl;
	cout<<"\t\t\t 1). Agregar nuevo usuario "<<endl;
	cout<<"\t\t\t 1). Modificar usuario "<<endl;
	cout<<"\t\t\t 1). Borrar usuario "<<endl;
	cout<<"\t\t\t 3). LOG OUT"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice2;

    switch(choice2)
    {
    case 1:
       ingresoUsuario.insertar();
		break;
	case 2:
	    ingresoUsuario.menuSecundario();
		break;
	case 3:
	    ingresoUsuario.borrar();
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
