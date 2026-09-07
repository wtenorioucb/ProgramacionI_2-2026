// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
double CalcDist(double velocidad, double tiempo)
{
    double distancia=0;
    distancia=velocidad*tiempo;
    return distancia;
}
int main()
{
    double velocidad, tiempo;
    cout << "ingrese su velocidad y su tiempo: " << endl;
    cin >> velocidad;
    cin >> tiempo;
    cout << "su distancia es: " << CalcDist(velocidad, tiempo);
}