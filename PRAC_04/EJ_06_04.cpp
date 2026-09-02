// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
int Sumatoria(int N)
{
    int suma;
    for (int i=1;i<=N;i++)
    {
        suma=suma+i;
    }
    return suma;
}
int main()
{
    int N;
    cout << "ingrese el numero: " << endl;
    cin >> N;
    if (N>0)
    {
        cout << "la sumatoria es: " << Sumatoria(N) << endl;
    }
    else 
    {
        cout << "su numero no es valido" << endl;
    }
    return 0;
}