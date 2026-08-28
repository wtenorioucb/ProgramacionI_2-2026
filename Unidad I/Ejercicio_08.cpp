// Utilizacion de la libreria cmath
// Elevar un numero a una potencia
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numero = 0;
    int potencia = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Ingrese la potencia: ";
    cin >> potencia;
    cout << "El numero elevado a la potencia es igual a: " << pow(numero, potencia);
    return 0;
}
