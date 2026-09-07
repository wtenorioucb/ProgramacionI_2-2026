// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
const double PI=3.1415;
double volumenCilindro(double radio, double altura)
{
    double volumen=0;
    volumen=(PI)*(radio*radio)*altura;
    return volumen;
}
int main()
{
    int altura, radio;
    cout << "ingrese la altura del cilindro: " << endl;
    cin >> altura;
    cout << "ingrese la altura del radio: " << endl;
    cin >> radio;
    cout << "el volumen del cilindro es: " << volumenCilindro(radio,altura) << endl;
    return 0;
}