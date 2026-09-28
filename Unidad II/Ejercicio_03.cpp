#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int edad=0;
    system("cls");
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Tu nombre es: " << nombre << endl;
    cout << "Tu edad es: " << edad << endl;
    return 0;
}