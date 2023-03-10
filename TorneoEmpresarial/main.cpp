#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iomanip>

using namespace std;

const int NumeroEmpresas = 4;// establesemos nuestrac onstantes para poder usarlas con dattos que seran  nuestros limites
const int NumeroMaterias = 4;
const int MaxCalificacionp1 = 1000000;
const int MaxCalificacionp2 = 1000000;
const int MaxCalificacionF = 1000000;
const int MaxCalificacionA = 1000000;
const int MinCalificacion = 1;
const int MaxLongitudCadena = 100;

int BusquedaAleatorios(int Minimo, int Maximo);
void LlenarMatriz (float Matriz [NumeroEmpresas][NumeroMaterias+1]);
void LlenarMatrizAr (float Matriz [NumeroEmpresas][NumeroMaterias+1]);
void LlenarMatrizAd (float Matriz [NumeroEmpresas][NumeroMaterias+1]);
void ImprimirLineaMatriz();
void ImprimirMatriz (float Matriz[NumeroEmpresas][NumeroMaterias+1], char Al[NumeroEmpresas][MaxLongitudCadena]);
void mein();

int main()
{
    mein();
    system("pause");
    return 0;

}
int BusquedaAleatorios(int Minimo, int Maximo) //encontrar numeros aleatorios
{
    return Minimo + rand() / (RAND_MAX / (Maximo - Minimo+1)+1);

}
void mein ()//recurso para generar las opciones
{
    int opciones;
    bool repetir = true; //Para que regrese a menú
    do
    {
        system("cls");
        cout << "\n\n\t\t\tTORNEO EMPRESAS" << endl;
        cout << "\t\t-------------------------------\n\n";
        cout << "\t1. EMPEZAR TORNEO EMPRESARIAL" << endl;
        cout << "\t2. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            system("cls");
            int a;
            cout << "\n\tIngrese \"1\" para continuar y \"2\" para salir: ";
            cin >> a;
            while (a == 1)
            {
                system ("cls");
                srand(time(NULL));
                srand(getpid());
    float matriz [NumeroEmpresas][NumeroMaterias+1];
    float matrizAr [NumeroEmpresas][NumeroMaterias+1];
    float matrizAd [NumeroEmpresas][NumeroMaterias+1];
    char AIn [NumeroEmpresas][MaxLongitudCadena]= {"ANIO 2015", "ANIO 2016","ANIO 2017","ANIO 2018"};//usamos cada uno de los años que vamos a evaluar en las filas
    char AAr [NumeroEmpresas][MaxLongitudCadena]= {"ANIO 2015", "ANIO 2016","ANIO 2017","ANIO 2018"};
    char AAd [NumeroEmpresas][MaxLongitudCadena]= {"ANIO 2015", "ANIO 2016","ANIO 2017","ANIO 2018"};
    LlenarMatriz (matriz);
    LlenarMatrizAr(matrizAr);
    LlenarMatrizAd(matrizAd);
    cout<<"\n CAMARA DE LA INDUSTRIA\n";
    ImprimirMatriz(matriz, AIn);
    cout<<"\n CAMARA DE LA CONSTRUCCION\n";
    ImprimirMatriz (matrizAr, AAr);
    cout<<"\n CAMARA DE TRANSPORTE\n";
    ImprimirMatriz(matrizAd, AAd);

     cout << "\n\t¿Desea realizar otra prueba? \"1\" para continuar y \"2\" para salir: ";
                cin >> a;
            }
            break;
        case 2: repetir = false;//colocamos la opcion falso, caso contrario sea 1 para que la accion sea contraria y finalice
                break;
        }
    }while (repetir);
}
void LlenarMatriz (float matriz [NumeroEmpresas][NumeroMaterias+1])//MATRIZ
{
    for (int y = 0; y < NumeroEmpresas; y++)
    {
        float SumaNA = 0;
        float SumaPromeIN = 0;
        for (int x = 0; x < NumeroMaterias; x++)
        {
            int CalA = BusquedaAleatorios (MinCalificacion, MaxCalificacionp1);
            SumaNA += (float) CalA;
            matriz [y][x] = CalA;
        }
        float PromedioN = SumaNA / NumeroMaterias;
        matriz [y][NumeroMaterias]= PromedioN;
        SumaPromeIN += PromedioN;
        float PromedioTotalIn = SumaPromeIN / NumeroEmpresas;

    }
}
void LlenarMatrizAr (float matrizAr [NumeroEmpresas][NumeroMaterias+1])//MATRIZ 1
{
    for (int y = 0; y < NumeroEmpresas; y++)
    {
        float SumaNotaAlumno = 0;
        for (int x = 0; x < NumeroMaterias; x++)
        {
            int CalificacionAlumno = BusquedaAleatorios (MinCalificacion, MaxCalificacionp2);
            SumaNotaAlumno += (float) CalificacionAlumno;
            matrizAr [y][x] = CalificacionAlumno;
        }
        float PromedioNotas = SumaNotaAlumno / NumeroMaterias;
        matrizAr [y][NumeroMaterias]= PromedioNotas;
    }
}
void LlenarMatrizAd (float matrizAd [NumeroEmpresas][NumeroMaterias+1])//MATRIZ A2
{
    for (int y = 0; y < NumeroEmpresas; y++)
    {
        float SumaNA = 0;
        for (int x = 0; x < NumeroMaterias; x++)
        {
            int CalificacionAlumno = BusquedaAleatorios (MinCalificacion, MaxCalificacionF);
            SumaNA += (float) CalificacionAlumno;
            matrizAd [y][x] = CalificacionAlumno;
        }
        float PromedioNotas = SumaNA / NumeroMaterias;
        matrizAd [y][NumeroMaterias]= PromedioNotas;
    }
}
void ImprimirLineaMatriz ()//realizamos los bordes de linea con un ciclo for
{
    cout <<"-----------";
    for (int x = 0; x < NumeroMaterias; x++)
    {
        cout <<"------------------";
    }
    cout <<"+\n";
}
void ImprimirMatriz (float matriz [NumeroEmpresas][NumeroMaterias+1], char Al [NumeroEmpresas][MaxLongitudCadena])
{
    float PromedioMayor = matriz [0][NumeroMaterias];
    float PromedioMenor = matriz [0][NumeroMaterias];
    char APromedioMenor [MaxLongitudCadena];
    char APromedioMayor [MaxLongitudCadena];
    memcpy (APromedioMayor, Al [0], MaxLongitudCadena);
    memcpy (APromedioMenor, Al [0], MaxLongitudCadena);
    ImprimirLineaMatriz ();
    cout << "|   MATRIZ   |";
    for(int x = 0; x < NumeroMaterias; x++)
    {
        cout<<"     EMPRESA   "<< ( int) x + 1<<"  |";

    }
    cout << ("promedio|\n");
    ImprimirLineaMatriz();
    for (int y=0; y<NumeroEmpresas; y++)
    {
        cout << "|   "<<Al[y]<<"|   ";
        float suma = 0;
        for (int x=0; x<NumeroMaterias; x++)
        {
            int Calificacion = matriz [y][x];
            cout <<"      |"<<Calificacion<< "      |";

        }
        float Promedio = matriz [y][NumeroMaterias]; //comparamos promedios con el ciclo if para determinar el mayor
        if (Promedio > PromedioMayor)
        {
            PromedioMayor =Promedio;
            memcpy (APromedioMayor, Al[y], MaxLongitudCadena);
        }
        if (Promedio < PromedioMenor)
        {
            PromedioMenor = Promedio;
            memcpy (APromedioMenor, Al [y], MaxLongitudCadena);

        }
        cout << "\t"<< fixed << setprecision(2)<< (double)Promedio<<"   |\n";
        ImprimirLineaMatriz();

    }
    cout << "promedio mayor: " << APromedioMayor << " es " <<PromedioMayor<<"\n";
    cout <<"promedio menor: " << APromedioMenor << " es " <<PromedioMenor<<"\n";


}
