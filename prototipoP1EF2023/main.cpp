#include <iostream>
#include <cstdlib>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Usuario.h"

using namespace std;
void creditosModulo();
void ayudaSTAFF();
int main()
{
    Usuario IngresoUsuario;
    int numero;
    do
    {
    system("cls");
    cout<<"\t\t\t |   Melvin Alberto Gonzalez Vasquez - 9959-22-3148   |"<<endl;
    cout<< " ";
    cout<<"\t\t\t----------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESA DEPORTES  |"<<endl;
	cout<<"\t\t\t----------------------------------"<<endl;
    cout<< " ";
    cout<<"\t\t\t Seleccionar usuario "<<endl;
    cout<<"\t\t\t 1). Login Usuario STAFF (crear usuarios) "<<endl;
	cout<<"\t\t\t 2). Login Usuario  "<<endl;
	cout<<"\t\t\t 3). Salir del Sistema"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<< " "<<endl;
	cout<<"\t\t\tingrese Opcion: ";
	cin>>numero;

        switch(numero)
        {
            case 1:
                IngresoUsuario.iniciarSesionSTAFF();
                break;
            case 2:
                IngresoUsuario.iniciarSesion();
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
