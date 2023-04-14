#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"
#include "tablero.h"
#include "Usuario.h"

using namespace std;

int main()
{
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    Usuario ingresoUsuario;
    juego.dibujarPortada("portada.txt");
    srand(getpid());
    int opciones,vidas,i;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuaracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. ingresar usuario para jugar  fuera de practica" << endl;
        cout << "\t\t4. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {

                Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                    juegoTemporal.iniciar();


                    system("pause");
                    break;



                }

        case 3:
            {
                ingresoUsuario.menuPrincipal();
                break;

            }
        case 4: repetir = false;

                break;
        }
    } while (repetir);
    system("cls");
    juego.dibujarPortada("creditos.txt");
    return 0;
}
