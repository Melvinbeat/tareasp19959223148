#include "Usuario.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

void Usuario::menuPrincipal()
{
    int opcion;
	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |      INGRESO DE SESION     |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Iniciar Sesion"<<endl;
	cout<<"\t\t\t 2. Crear cuenta"<<endl;
	cout<<"\t\t\t 3. Exit"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
	case 1:
		iniciarSesion();
		break;
	case 2:
		insertar();
		break;
	case 3:
		return;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!=3);
}
void Usuario::insertar()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------- Agregar Nuevo Usuario -----------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa el nombre de Usuario: ";
	cin>>nombre;
	cout<<"\t\t\tIngresa la contraseña: ";
	cin>>contrasena;
	file.open("nombresUsuarios.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena << "\n";
	file.close();
}
void Usuario::iniciarSesion()
{
    system("cls");
	fstream file;
	int found=0, opcion;
	file.open("nombresUsuarios.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string nameUsuario, codigo;
		cout<<"\n----------------------------------------------------------------------------------------------------------------";
        cout<<"\n--------------------------------------------------- Iniciar Sesion ---------------------------------------------"<<endl;
		cout<<"\n\t\tUsuario: ";
		cin>>nameUsuario;
		cout << "\t\tContraseña: ";
		cin >> codigo;
		file >> nombre >> contrasena;
		while(!file.eof())
		{
			if(nameUsuario==nombre && codigo == contrasena)
			{

                do{
                system("cls");
                menuGeneral();

                }while(opcion!=4);
				found++;
			}
			file >> nombre >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Persona no encontrada...";
		}
		file.close();
	}
}

void Usuario::modificar()
{
	system("cls");
	fstream file,file1;
	string nameUsuario, codigo;
	int found=0, opcion;
	cout<<"\n-------------------------Modificacion Detalles Usuario-------------------------"<<endl;
	file.open("nombresUsuarios.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
        cout<<"\n Ingrese su nombre de usuario: ";
        cin>>nameUsuario;
        cout<<" Ingrese la contraseña: ";
        cin>>codigo;
		file1.open("Record.txt",ios::app | ios::out);
		file >> nombre >> contrasena;
		while(!file.eof())
		{
			if(nameUsuario!=nombre && codigo!=contrasena){
			 file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else{
                cout << "\n\tQue desea modificar?" << endl;
                cout << "\t1. Usuario" << endl;
                cout << "\t2. Contraseña" << endl;
                cout << "\tIngrese una opcion" << endl;
                cin >> opcion;
                if (opcion == 1){
                    cout<<"\n Ingrese su nombre de usuario: ";
                    cin>>nombre;
                    file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena << "\n";
                    found++;
                }
                else{
                    if (opcion == 2){
                        cout<<" Ingrese la contraseña: ";
                        cin>>contrasena;
                    }
                file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena << "\n";
                found++;
                }
			}
			file >> nombre >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Usuario no encontrado...";
		}
		file1.close();
		file.close();
		remove("nombresUsuarios.txt");
		rename("Record.txt","nombresUsuarios.txt");
	}
}
void Usuario::borrar()
{
	system("cls");
	fstream file,file1;
	string nombreUsuario, codigo;
	int found=0;
	cout<<"\n------------------------- Borrar Cuenta -------------------------"<<endl;
	file.open("nombresUsuarios.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el usuario para borrar: ";
		cin>>nombreUsuario;
		cout<<" Ingrese la contraseña: ";
		cin>>codigo;
		file1.open("Record.txt",ios::app | ios::out);
		file >> nombre >> contrasena;
		while(!file.eof())
		{
			if(nombreUsuario!= nombre && codigo != contrasena)
			{
				file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de Usuario exitoso";
			}
			file >> nombre >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Usuario no encontrado...";
		}
		file1.close();
		file.close();
		remove("nombresUsuarios.txt");
		rename("Record.txt","nombresUsuarios.txt");
		exit(0);
	}
}
void menuGeneral()
{
    system("cls");
    int choice;
	//char x;
	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA EMPRESARIAL  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1). Recursos empresariales"<<endl;
	cout<<"\t\t\t 2). Procesos administrativos"<<endl;
	cout<<"\t\t\t 3). Reportes o informes"<<endl;
	cout<<"\t\t\t 4). Ayuda"<<endl;
	cout<<"\t\t\t 5). Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t  Opcion a escoger:1-2-3-4-5 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{*/
    		catalogos();
    		/*cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		break;
	case 4:
		//search();
		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}
void Usuario::catalogo()
{
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t-----------------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA EMPRESARIAL - recursos empresariales  |"<<endl;
	cout<<"\t\t\t-----------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Clientes"<<endl;
	cout<<"\t\t\t 2. Vendedores"<<endl;
	cout<<"\t\t\t 3. Cobradores"<<endl;
	cout<<"\t\t\t 4. Conceptos"<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2-3-4-5"<<endl;
	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{
    		catalogos();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		break;
	case 4:
		//search();
		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}
void creditosModulo(){
string line;
    //char userInput = ' ';
    ifstream myFile("modulo.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Presione cualquier tecla para continuar";
        cin.get();
    }
    else
    {
        cout << "Error FATAL: el archivo de modulo no pudo ser cargado" << endl;
        cin.get();
    }
}

