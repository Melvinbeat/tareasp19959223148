
#include <iostream>
#include <cstdlib>

using namespace std;

//Definición de prototipos
void alumnos();


int main() {
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu principal" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Ingresar datos" << endl;
        cout << "\t2. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                alumnos();
                break;

        case 2: repetir = false;
                break;
        }
    } while (repetir);
    return 0;
}
//Implementación de funciones
void alumnos()
{

    char alum1, alum2, alum3, alum4, alum5;
    float npa1, npa2, npa3, npa4, npa5, nsa1, nsa2, nsa3, nsa4, nsa5, nta1, nta2, nta3, nta4, nta5, nca1, nca2, nca3, nca4, nca5, nqa1, nqa2, nqa3, nqa4, nqa5,tn1, tn2, tn3, tn4, tn5, tp1, tp2, tp3,tp4,tp5;

    cout << "\n\tIngrese nombre del primer alumno: ";
    cin >> alum1;
    cout << "\n\tIngrese nombre del segundo alumno: ";
    cin >> alum2;
    cout << "\n\tIngrese nombre del tercer alumno: ";
    cin >> alum3;
    cout << "\n\tIngrese nombre del cuarto alumno: ";
    cin >> alum4;
    cout << "\n\tIngrese nombre del quinto alumno: ";
    cin >> alum5;
        cout << "\n\t----------------------" << endl;

    cout << "\n\tIngrese las 5 notas de: "<< alum1 << " ";
    cin >> npa1 >> npa2>>npa3>>npa4>>npa5;
    cout << "\n\tIngrese las 5 notas de: "<< alum2 << " ";
    cin >> nsa1 >> nsa2 >> nsa3 >> nsa4 >> nsa5;
    cout << "\n\tIngrese las 5 notas de: "<< alum3 << " ";
    cin >> nta1 >> nta2 >> nta3 >> nta4 >> nta5;
    cout << "\n\tIngrese las 5 notas de: "<< alum4 << " ";
    cin >> nca1 >> nca2 >> nca3 >> nca4 >> nca5;
    cout << "\n\tIngrese las 5 notas de: "<< alum5 << " ";
    cin >> nqa1 >> nqa2 >> nqa3 >> nqa4 >> nqa5;
        cout << "\n\t----------------------" << endl;
    tn1 = npa1 + npa2 + npa3 + npa4 + npa5;
    tn2 = nsa1 + nsa2 + nsa3 + nsa4 + nsa5;
    tn3 = nta1 + nta2 + nta3 + nta4 + nta5;
    tn4 = nca1 + nca2 + nca3 + nca4 + nta5;
    tn5 = nqa1 + nqa2 + nqa3 + nqa4 + nqa5;

    cout << "\n\tTotal de las 5 notas de "<<alum1<<" es de: "<< tn1 <<endl;
    cout << "\n\tTotal de las 5 notas de "<<alum2<<" es de: "<< tn2 <<endl;
    cout << "\n\tTotal de las 5 notas de "<<alum3<<" es de: "<< tn3 <<endl;
    cout << "\n\tTotal de las 5 notas de "<<alum4<<" es de: "<< tn4 <<endl;
    cout << "\n\tTotal de las 5 notas de "<<alum5<<" es de: "<< tn5 <<endl;

    cout << "\n\t----------------------" << endl;

    tp1 = tn1 / 5;
    tp2 = tn2 / 5;
    tp3 = tn3 / 5;
    tp4 = tn4 / 5;
    tp5 = tn5 / 5;

    cout << "\n\t el promedio de " << alum1 << "es de: " << tp1 <<endl;
    cout << "\n\t el promedio de " << alum2 << "es de: " << tp2 <<endl;
    cout << "\n\t el promedio de " << alum3 << "es de: " << tp3 <<endl;
    cout << "\n\tel promedio de " << alum4 << "es de: " << tp4 <<endl;
    cout << "\n\tel promedio de " << alum5 << "es de: " << tp5 <<endl;


    system("pause>nul");
}
