// Utilizacion de la libreria cmath
// Valor absoluto de un numero
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El valor absoluto de " << numero << " es igual a " << abs(numero);
    return 0;
}
