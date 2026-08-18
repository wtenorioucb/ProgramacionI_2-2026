// Utilizacion de la libreria cmath
// Redondear un numero
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float numero = 0.0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El valor redondeado de " << numero << " es " << round(numero);
    return 0;
}
