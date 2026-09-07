// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
double ConvBol(double Boliviano,double TipoCambio)
{
    double Dolares=0;
    Dolares=Boliviano/TipoCambio;
    return Dolares;
}
int main()
{
    double Boliviano, TipoCambio;
    int tipo;

    cout << "Ingrese la cantidad en bolivianos: ";
    cin >> Boliviano;

    cout << "Seleccione el tipo de cambio:" << endl;
    cout << "1. Oficial" << endl;
    cout << "2. Paralelo" << endl;
    cout << "Opcion: ";
    cin >> tipo;

    if (tipo == 1)
    {
        cout << "Ingrese el tipo de cambio oficial: ";
        cin >> TipoCambio;
    }

    else if (tipo == 2)
    {
        cout << "Ingrese el tipo de cambio paralelo: ";
        cin >> TipoCambio;
    }

    else
    {
        cout << "Opcion no valida." << endl;
        return 0;
    }

    cout << "Cantidad en dolares: $" << ConvBol(Boliviano,TipoCambio) << endl;

    return 0;
}
