#include "Calculos.h"
#include <iostream>

void Calculos::verpago()
{
    system("cls");
    string fecha, id;
    double salario, igss, isr, irtra, salariototal;
    cout << "\n\nIngrese fecha a pagar: "<< endl;
    cin >> fecha;
    cout << "\n\nIngrese ID de empleado "<< endl;
    cin >> id;
    cout << "\nIngrese salario: "<< endl;
    cin >> salario;
    igss = salario * 0.0483;
    irtra = salario * 0.01;
    if (salario<=30000 && salario>=0.00)
    {
        isr = salario * 0.05;
    }
    else
    {
        isr = salario * 0.07;

    }
    salariototal = salario - (igss+irtra+isr);
    system("cls");
    cout << "\n\n\t    --- DETALLE DE PAGO --- " <<endl;
    cout<<"\t-------------------------------"<<endl;
    cout << "\n" << endl;
    cout << "\tBoleta de pago correspondiente al "<< fecha << endl;
    cout << "\tEmpleado - "<< id << endl;
    cout << "\n" << endl;
    cout << "\tsalario neto         - " << salario << endl;
    cout << "\tDescuesntos aplicados " << endl;
    cout << "\t* descuento de IGSS  - " << igss << endl;
    cout << "\t* descuento de IRTRA - " << irtra << endl;
    cout << "\t* descuento de ISR   - " << isr << endl;
    cout<<"\t-------------------------------"<<endl;
    cout << "\tTOTAL A PAGAR      - " << salariototal << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    system ("pause");

}
