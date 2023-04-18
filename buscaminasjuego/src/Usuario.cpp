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
const int FILASTABLERO = 5;//establecemos parametros de inicio para el programa
const int COLUMNASTABLERO = 5;
const int MINASENTABLERO = 3;
const bool MODODESARROLLADOR = true;//modo jugador desactivado al ser verdadero
Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR);
string nameUsuario, codigo;
void Usuario::insertar()//creamos la funcion que permite crear usuarios
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------- Agregar Nuevo Usuario -----------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa el nombre de Usuario: ";
	cin>>nombre;
	cout<<"\t\t\tIngresa la contrase�a: ";
	cin>>contrasena;
	score = 0;//es igualado a cero para que no agrege valore erroneos
	file.open("nombresUsuarios.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score << "\n";
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
		cout<<"\n----------------------------------------------------------------------------------------------------------------";
        cout<<"\n--------------------------------------------------- Iniciar Sesion ---------------------------------------------"<<endl;
		cout<<"\n\t\tUsuario: ";
		cin>>nameUsuario;
		cout << "\t\tContrase�a: ";
		cin >> codigo;
		file >> nombre >> contrasena >> score;
		while(!file.eof())
		{
			if(nameUsuario==nombre && codigo == contrasena)
			{
                Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR);
                Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                do{
                Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                system("cls");
                cout<<"\n------------------------------------------------------------------------------------------------------------------------";
                cout<<"\n---------------------------------------------- BIENVENIDO AL JUEGO BUSCAMINAS ------------------------------------------"<<endl;
                cout << "\n\n\t\tUsuario: " << nombre << endl << endl;
                cout << "\n\t\t1. Iniciar juego" << endl;
                cout << "\t\t2. Configuracion del juego" << endl;
                cout << "\t\t3. Modificar usuario" << endl;
                cout << "\t\t4. Regresar a men� principal" << endl;
                cout << "\t\tIngrese una opci�n: ";
                cin >> opcion;
                    switch(opcion)
                    {
                        case 1:
                            file.close();
                            system("cls");
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
			file >> nombre >> contrasena >> score;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t El usuario o contrase�a sin incorrectos...";
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
	string name, c2;
	int found=0, opcion;
	cout<<"\n-------------------------Modificacion Detalles Usuario-------------------------"<<endl;
	file.open("nombresUsuarios.txt",ios::in);
	cout<<"\n Ingrese su nombre de usuario: ";
    cin>>name;
    cout<<" Ingrese la contrase�a: ";
    cin>>c2;
    file1.open("Record.txt",ios::app | ios::out);
    file >> nombre >> contrasena >> score;
    while(!file.eof())
    {
        if(name!=nombre && c2!=contrasena){
         file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score << "\n";
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
                file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score<< "\n";
                nameUsuario = nombre;
                found++;
            }
            else{
                if (opcion == 2){
                    cout<<" Ingrese la contrase�a: ";
                    cin>>contrasena;
                    codigo = contrasena;
                }
            file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score << "\n";
            found++;
            }
        }
        file >> nombre >> contrasena >> score;
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
void Usuario::borrar()//creamos la funcion de borrar para luego se usada en otras funciones
{
	system("cls");
	fstream file,file1;
	string name, c2;
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
		cin>>name;
		cout<<" Ingrese la contrase�a: ";
		cin>>c2;
		file1.open("Record.txt",ios::app | ios::out);//abrimos archivo a utilizar
		file >> nombre >> contrasena >> score;
		while(!file.eof())
		{
			if(name!= nombre && c2 != contrasena)
			{
				file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score<< "\n";
			}//se imprimen los datos en el log del usuario
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de Usuario exitoso";
			}
			file >> nombre >> contrasena >> score;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Usuario no encontrado...";
		}
		file1.close();
		file.close();
		remove("nombresUsuarios.txt");//usamos el archivo de texto para eliminar los datos ingresados
		rename("Record.txt","nombresUsuarios.txt");
		exit(0);
	}
}
void Usuario::cambioScore(int valScore)
{
	system("cls"); //limpiamos el menu
	fstream file,file1;
	string name;
	file.open("nombresUsuarios.txt",ios::in); //abrmos el archivo a usar
	if(!file) //creamos la condicion con respecto a los valores de la libreria
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		name = nameUsuario;
		file1.open("Record.txt",ios::app | ios::out);
		file >> nombre >> contrasena >> score;
		while(!file.eof())
		{
			if(name!= nombre)//creamos la condicion de la variable a ser ejecutada
			{
				file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score<< "\n";
			}
			else
			{
				if(valScore > score)
                {
                    score = valScore;
                    file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score << "\n";
                }
                else{
                    if(valScore <= score){
                       valScore = score;
                       score = score;
                       file1<<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena<<std::left<<std::setw(15)<< score << "\n";
                    }
                }
			}
			file >> nombre >> contrasena >> score;
		}
		file1.close();
		file.close();
		remove("nombresUsuarios.txt");
		rename("Record.txt","nombresUsuarios.txt"); //importamos el arte contenido en el documento de texto como la portada
	}
	cout << "\n\n\t\t\tFIN DEL JUEGO!!!\n\n\n";
}


