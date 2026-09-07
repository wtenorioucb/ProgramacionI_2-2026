// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
bool EsPar(int numero)
{
    return numero%2==0;
}
int main()
{
    int numero;
    cout << "ingrese su numero: " << endl;
    cin >> numero;

    if (EsPar(numero))
    {
        cout << "su numero es par" << endl;
    }

    else 
    {
        cout << "su numero es impar" << endl;
    }

    return 0;
}