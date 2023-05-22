#ifndef CALCULOS_H
#define CALCULOS_H
#include <iostream>
using namespace std;

class Calculos
{
    private:
		string id;
		double salari;
		double sala(double x), cigss(double y);

    public:

        void verpago();
        double sal();

};

#endif // CALCULOS_H
