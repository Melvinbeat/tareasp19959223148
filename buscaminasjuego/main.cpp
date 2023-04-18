#include <iostream>
#include <unistd.h>
#include "Juego.h" //invocamos las librerias creadas
#include "Config.h"
#include "Usuario.h"

using namespace std; // establecemos las constantes inciales para el juego
const int FILASTABLERO = 5;
const int COLUMNASTABLERO = 5;
const int MINASENTABLERO = 3;
const bool MODODESARROLLADOR = true;//aunque estas luego puedan modificarse
int main()
{  //inicializamos la aplicacion del juego
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR);
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    Usuario ingresoUsuario;
    juego.dibujarPortada("portada.txt");//creamos la portada del inicio del programa
    int opcion;
	do
    {
	system("cls");
	cout<<"\t\t\t-------------------------------"<<endl;//declaramos el menu principal del juego
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

    switch(opcion) //creamos el menu para selecionar las variables y opciones de menu
    {
	case 1:
		ingresoUsuario.iniciarSesion(); //invocamos la funcion ya con el usuario creado
		break;
	case 2:
		ingresoUsuario.insertar(); //invocamos la funcion para crear usuario
		break;
	case 3:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!=3); //creamos el final del switch
    system("cls");
    juego.dibujarPortada("creditos.txt");  //importamos el arte contenido en el documento de texto como la portada
    return 0;
}
