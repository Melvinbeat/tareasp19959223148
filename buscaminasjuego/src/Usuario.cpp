#include "Usuario.h"
#include "Juego.h"
#include "Config.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;
const int FILASTABLERO = 5;
const int COLUMNASTABLERO = 5;
const int MINASENTABLERO = 3;
const bool MODODESARROLLADOR = true;
const int VIDASTABLERO = 3;
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
	cout<<"\t\t\tIngresa la contrase�a: ";
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
		cout << "\t\tContrase�a: ";
		cin >> codigo;
		file >> nombre >> contrasena;
		while(!file.eof())
		{
			if(nameUsuario==nombre && codigo == contrasena)
			{
                Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
                do{
                Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                system("cls");
                cout<<"\n------------------------------------------------------------------------------------------------------------------------";
                cout<<"\n---------------------------------------------- BIENVENIDO AL JUEGO BUSCAMINAS -------------------------------------------"<<endl;
                cout << "\n\t\t1. Si" << endl;
                cout << "\t\t2. Configuracion del juego" << endl;
                cout << "\t\t3. Modificar usuario" << endl;
                cout << "\t\t4. salir" << endl;
                cin >> opcion;
                    switch(opcion)
                    {
                        case 1:
                            file.close();
                            juegoTemporal.iniciar();
                            system("pause");
                            break;
                        case 2:
                            file.close();
                            configuracionJuego.menuConfiguracion();
                            break;
                        case 3:
                            file.close();
                            menuSecundario();
                            break;
                        case 4:
                            return;
                        default:
                            cout << "\n\t\tOpcion inv�lida" << endl;
                            system("pause");
                            break;
                    }
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
void Usuario::menuSecundario()
{
    int opcion;
	do
    {
	system("cls");
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Modificacion de Usuario ----------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Cambiar usuario o contrase�a"<<endl;
	cout<<"\t\t\t 2. Borrar cuenta"<<endl;
	cout<<"\t\t\t 3. Regresar"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;
        switch(opcion)
        {
        case 1:
            modificar();
            break;
        case 2:
            borrar();
            break;
        case 3:
            return;
        default:
            cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
            system ("pause");
            break;
        }
    }while(opcion!=3);
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
        cout<<" Ingrese la contrase�a: ";
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
                cout << "\t2. Contrase�a" << endl;
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
                        cout<<" Ingrese la contrase�a: ";
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
		cout<<" Ingrese la contrase�a: ";
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
