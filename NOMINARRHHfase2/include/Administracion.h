#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H
#include <iostream>
using namespace std;

class Administracion
{
    public:
        void menuGeneralSTAFF(string n);
        void infopersonalSTAFF(string n);
        void procesoSTAFF(string n);
        void infomesSTAFF(string n);
    private:
        string nombre;
};

#endif // ADMINISTRACION_H
