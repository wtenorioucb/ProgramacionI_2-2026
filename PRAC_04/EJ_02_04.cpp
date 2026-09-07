// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
int DetMayo(int num1, int num2, int num3)
{
    int mayor=num1;

    if (num2>mayor)
    {
        mayor=num2;
    }

    if (num3>mayor)
    {
        mayor=num3;
    }

    return mayor;
}

int main()
{
    int num1=0,num2=0,num3=0;
    cout<<"Ingrese el 1er numero: "; cin>>num1;
    cout<<"Ingrese el 2do numero: "; cin>>num2;
    cout<<"Ingrese el 3er numero: "; cin>>num3;

    cout<< "el numero mayor es: "<<DetMayo(num1,num2,num3)<<endl;
    return 0;
}
