#include "Calculos.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <conio.h>
#include<iomanip>

using namespace std;

void Calculos::calcularpago()
{
    system("cls");
    fstream file;
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

    salariototal = (salario - (igss+irtra+isr))+250;
    system("cls");
    cout << "\n\n\t    --- DETALLE DE PAGO --- " <<endl;
    cout<<"\t-------------------------------"<<endl;
    cout << "\n" << endl;
    cout << "\tBoleta de pago correspondiente al "<< fecha << endl;
    cout << "\tEmpleado - "<< id << endl;
    cout << "\n" << endl;
    cout << "\tsalario neto         - " << salario << endl;
    cout << "\tbonificacion         - " << "+ 250" << endl;
    cout << "\thoras extras         - " << "no hubieron" << endl;
    cout << "\tDescuesntos aplicados " << endl;
    cout << "\t* descuento de IGSS  - " << igss << endl;
    cout << "\t* descuento de IRTRA - " << irtra << endl;
    cout << "\t* descuento de ISR   - " << isr << endl;
    cout<<"\t-------------------------------"<<endl;
    cout << "\tTOTAL A PAGAR      - " << salariototal << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    file.open("BoletasPago.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< salario <<std::left<<std::setw(15)<< id << std::setw(15)<< fecha <<std::left<<std::setw(15)<< igss <<std::left<<std::setw(15)<< irtra <<std::left<<std::setw(15)<< isr <<std::left<<std::setw(15)<< salariototal << "\n";
	file.close();
    system ("pause");

}
void Calculos::verpago()
{
    system("cls");
	fstream file;
	int found=0;
	file.open("BoletasPago.txt",ios::in);
	if(!file)
	{
				cout<<"\n\t\t\tNo hay informacion..." << endl;
	}
	else
	{
	    file >> salario1 >> id1 >> fecha1 >> igss1 >> irtra1 >> isr1 >> salariototal1;
		string id;
		cout<<"\n-------------------------Datos del empelado buscado------------------------"<<endl;
		cout<<"\nIngrese Id del empleado : ";
		cin>>id;
		while(!file.eof())
		{
			if(id==id1)
			{
				cout << "\n\n\t    --- DETALLE DE PAGO --- " <<endl;
                cout<<"\t-------------------------------"<<endl;
                cout << "\n" << endl;
                cout << "\tBoleta de pago correspondiente al "<< fecha1 << endl;
                cout << "\tEmpleado - "<< id1 << endl;
                cout << "\n" << endl;
                cout << "\tsalario neto         - " << salario1 << endl;
                cout << "\tDescuesntos aplicados  " << endl;
                cout << "\t* descuento de IGSS  - " << igss1 << endl;
                cout << "\t* descuento de IRTRA - " << irtra1 << endl;
                cout << "\t* descuento de ISR   - " << isr1 << endl;
                cout<<"\t-------------------------------"<<endl;
                cout << "\tTOTAL A PAGAR      - " << salariototal1 << endl;
                cout << "\n" << endl;
                cout << "\n" << endl;
				found++;
			}
			file >> id >> nombre >> telefono >> direccion >> puesto >> sueldo;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Persona no encontrada...";
		}
		file.close();
	}
	system ("pause");
}





