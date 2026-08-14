#include <iostream>
#include <windows.h> // Libreria que me sirve para habilitar los acentos y ñ

using namespace std;

int main()
{
    int opcion = 0;
    SetConsoleOutputCP(65001); // Sentencia que activa la libreria windows.h para acentos y ñ
    do
    {
        system("cls"); // Sentencia para limpiar la pantalla
        cout << "\tMENU DE OPCIONES" << endl;
        cout << "\t================" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. SALIR" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "Usted ha ingresado a la opción 1" << endl;
                break;
            case 2:
                cout << "Usted ha ingresado a la opción 2" << endl;
                break;
            case 3:
                cout << "Usted ha ingresado a la opción 3" << endl;
                break;
            default:
                if (opcion != 0)
                {
                    cout << "Opción no válida.";
                }
                break;
        }
        if (opcion != 0)
        {
            system("pause");
        }
    } while (opcion != 0);
    system("cls");
    cout << "Se ha salido del Sistema.";
    return 0;
}
