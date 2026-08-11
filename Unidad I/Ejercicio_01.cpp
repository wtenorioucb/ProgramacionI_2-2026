#include <iostream>
#include <windows.h> // Libreria que me sirve para habilitar los acentos y ñ

using namespace std;

int main()
{
    int edad = 0;

    SetConsoleOutputCP(65001); // Sentencia que activa la libreria windows.h para acentos y ñ
    
    system("cls"); // Sentencia para limpiar la pantalla

    cout << "Ingese su edad: ";
    cin >> edad;
    cout << "La edad que ha ingresado es " << edad << " años";
    
    return 0;
}
