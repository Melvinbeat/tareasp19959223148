#ifndef USUARIO_H
#define USUARIO_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;
class Usuario
{
	private:
		string nombre, contrasena;
		int score;//crea las variables usadas para le punteo
		int valScore;//crea variable usada para almacenar el valor del punteo
	public:
		void iniciarSesion();//trae las funciones que inician el juego
		void iniciarSesionSTAFF();
		void menuSecundario();//se obtiene la funcion de usuarios
		void insertar();//nos permite colocar los valores ingresados para el usuario
		void modificar();//atrae la funcion que permite hacer cambios al documento de texto con los usuarios
		void borrar();//permite invocar la funcion para eliminar datos en el usuario
		void cambioScore (int valScore);//realiza la sumatoria de los puntos y permite acumular puntos

};


#endif // USUARIO_H
