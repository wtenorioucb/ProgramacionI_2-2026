/*
    Autor: Willy Tenorio
*/

#include <iostream>

using namespace std;

int main()
{
    int opcion = 0;
    cout << "Ingrese la opcion: ";
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            cout << "Ingreso a la opcion 1.";
            break;
        case 2:
            cout << "Ingreso a la opcion 2.";
            break;
        case 3:
            cout << "Ingreso a la opcion 3.";
            break;
        default:
            cout << "No ingreso ninguna opcion permitida.";
            break;
    }
    return 0;
}