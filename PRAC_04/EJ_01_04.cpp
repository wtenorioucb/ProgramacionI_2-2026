// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
int main()
{
    int base=0, altura=0;
    int area=0;
    cout << "ingrese la base y la altura del triangulo: " << endl;
    cin >> base;
    cin >> altura;
    area=(base*altura)/2;
    cout << "el area de su triangulo es: " << area << endl;
}