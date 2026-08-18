// Utilizacion de la libreria cmath
// Sacar la raiz cuadrada de un número
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La raiz cuadra de "<< numero <<" es igual a " << sqrt(numero);
    return 0;
}
