// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
int ContDigitos(int numero)
{
    int contador=0;
    while (numero>0)
    {
        numero=numero/10;
        contador++;
    }
    return contador;
}
int main()
{
    int numero; 
    cout << "ingrese un numero mayor a 0: " << endl;
    cin >> numero;
    if (numero>0)
    {
        cout << "el numero tiene " << ContDigitos(numero) << " digitos" << endl; 
    }
    else
    {
        cout << "su numero debe ser positivo" << endl;
    }
    return 0;
}