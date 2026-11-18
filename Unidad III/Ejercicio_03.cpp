#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> // Para setw, left, right, setfill

using namespace std;

// Definir las estructuras
struct DatosContacto
{
    char nombre[50];
    unsigned int celular;
    unsigned int telefono;
    char email[30];
    bool eliminado;
};

// Prototipar las funciones
void MenuOpciones(string NombreArchivo);
void AdicionarContacto(string NombreArchivo);
DatosContacto IngresarDatosContacto();
void ListadoContactos(string NombreArchivo);
void BuscarContacto(string NombreArchivo);
void ModificarContacto(string NombreArchivo);
void EliminarContacto(string NombreArchivo);

int main()
{
    string NombreArchivo = "Contactos.bin";
    MenuOpciones(NombreArchivo);
    return 0;
}

void MenuOpciones(string NombreArchivo)
{
    int opcion = 0;
    do
    {
        system("cls"); // Sentencia para limpiar la pantalla
        cout << "\tMENU DE OPCIONES" << endl;
        cout << "\t================" << endl;
        cout << "1. Adicionar Contacto" << endl;
        cout << "2. Modificar Contacto" << endl;
        cout << "3. Eliminar Contacto" << endl;
        cout << "4. Listado de Contactos" << endl;
        cout << "5. Buscar Contacto" << endl;
        cout << "0. SALIR" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                AdicionarContacto(NombreArchivo);
                break;
            case 2:
                ModificarContacto(NombreArchivo);
                break;
            case 3:
                EliminarContacto(NombreArchivo);
                break;
            case 4:
                ListadoContactos(NombreArchivo);
                break;
            case 5:
                BuscarContacto(NombreArchivo);
                break;
            default:
                if (opcion != 0)
                {
                    cout << "\nOpción no válida." << endl;
                    system("pause");
                }
                break;
        }
    } while (opcion != 0);
    system("cls");
    cout << "\nSe ha salido del Sistema.";
}

void AdicionarContacto(string NombreArchivo)
{
    DatosContacto contacto;   
    
    // 1. Abrir el archivo binario
    ofstream archivo;
    archivo.open(NombreArchivo, ios::binary|ios::app);
    if (archivo.good())
    {
        // 2. Guardar los datos
        cin.ignore();
        contacto = IngresarDatosContacto();
        archivo.write((char*)&contacto, sizeof(DatosContacto));

        // 3. Cerrar el archivo binario
        archivo.close();

        cout << "Se ha ingresado el contacto correctamente." << endl;
        system("pause");
    }
    else
    {
        cout << "No es posible abrir el archivo (" << NombreArchivo << ")."  << endl;
        system("pause");
    }

    
}

DatosContacto IngresarDatosContacto()
{
    DatosContacto contacto;
    cout << "\tCONTACTO" << endl;
    cout << "\t========" << endl;
    cout << "Ingrese el nombre: ";
    cin.getline(contacto.nombre, 51);
    cout << "Ingrese el nro de celular: ";
    cin >> contacto.celular;
    cout << "Ingrese el nro de telefono: ";
    cin >> contacto.telefono;
    cin.ignore();
    cout << "Ingrese el email: ";
    cin.getline(contacto.email, 31);
    contacto.eliminado = false;
    return contacto;
}

void ListadoContactos(string NombreArchivo)
{
    DatosContacto contacto;
    // 1. Abrir el archivo para lectura
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);
    if (archivo.good())
    {
        // 2. Leer al archivo y listar todos los datos
        system("cls");
        cout << "LISTADO DE CONTACTOS" << endl;
        cout << "====================" << endl << endl;
        cout << left << setw(52) << "NOMBRE" << right << setw(10) << "CELULAR" << right << setw(9) << "TELEFONO" << right << setw(32) << "EMAIL" << endl;
        cout << "-------------------------------------------------------------------------------------------------------" << endl;
        while (archivo.read((char*)&contacto, sizeof(DatosContacto)))
        {
            if (!contacto.eliminado)
            {
                cout << left << setw(52) << contacto.nombre << right << setw(10) << contacto.celular << right << setw(9) << contacto.telefono << right << setw(32) << contacto.email << endl;
            }
        }
        cout << "-------------------------------------------------------------------------------------------------------" << endl;
        system("pause");
    }
    else
    {
        cout << "No es posible abrir el archivo (" << NombreArchivo << ")."  << endl;
        system("pause");
    }
    
}

void BuscarContacto(string NombreArchivo)
{
    DatosContacto contacto;
    bool encontrado = false;
    string nombreBuscado = "";
    
    // 1. Abrir el archivo para lectura
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);
    if (archivo.good())
    {
        // 2. Buscar el contacto
        system("cls");
        cout << "BUSCAR CONTACTO" << endl;
        cout << "===============" << endl;
        cout << "Ingrese el nombre del contacto a buscar: ";
        cin.ignore();
        getline(cin, nombreBuscado);
        while (archivo.read((char*)&contacto, sizeof(DatosContacto)))
        {
            if (nombreBuscado == contacto.nombre && !contacto.eliminado)
            {
                cout << "\nCONTACTO ENCONTRADO: " << contacto.nombre << endl;
                cout << "-----------------------------------" << endl;
                cout << "\tTelefono: " << contacto.telefono << endl;
                cout << "\tCelular: " << contacto.celular << endl;
                cout << "\tEmail: " << contacto.email << endl;
                cout << "-----------------------------------\n" << endl;
                encontrado = true;
            }
        }
        if (!encontrado)
        {
            cout << "Contacto no encontrado." << endl;
        }
        // 3. Cerrar el archivo
        archivo.close();
        system("pause");
    }
    else
    {
        cout << "No es posible abrir el archivo (" << NombreArchivo << ")."  << endl;
        system("pause");
    }
}

void ModificarContacto(string NombreArchivo)
{
    DatosContacto contacto;
    bool encontrado = false;
    string nombreBuscado = "";
    
    // 1. Abrir el archivo para lectura y escritura utilizar el fstream y los parámetros ios::in | ios::out 
    fstream archivo;
    archivo.open(NombreArchivo, ios::in | ios::out | ios::binary);
    if (archivo.good())
    {
        // 2. Buscar el contacto a modificar
        system("cls");
        cout << "CONTACTO PARA MODIFICAR" << endl;
        cout << "=======================" << endl;
        cout << "Ingrese el nombre del contacto a modificar: ";
        cin.ignore();
        getline(cin, nombreBuscado);
        while (archivo.read((char*)&contacto, sizeof(DatosContacto)))
        {
            if (nombreBuscado == contacto.nombre && !contacto.eliminado)
            {
                cout << "\nCONTACTO ENCONTRADO: " << contacto.nombre << endl;
                cout << "-----------------------------------" << endl;
                cout << "\tTelefono: " << contacto.telefono << endl;
                cout << "\tCelular: " << contacto.celular << endl;
                cout << "\tEmail: " << contacto.email << endl;
                cout << "-----------------------------------" << endl;
                encontrado = true;
                // Mover el puntero de escritura al inicio del registro encontrado
                archivo.seekg(-sizeof(DatosContacto), ios::cur);
                // Ingresar los nuevos datos del contacto
                contacto = IngresarDatosContacto();
                // Escribir los nuevos datos en el archivo binario
                archivo.write((char*)&contacto, sizeof(DatosContacto));
                cout << "Contacto modificado correctamente." << endl;    
            }
        }
        if (!encontrado)
        {
            cout << "Contacto no encontrado." << endl;
        }
        system("pause");
        // 3. Cerrar el archivo
        archivo.close();
    }
    else
    {
        cout << "No es posible abrir el archivo (" << NombreArchivo << ")."  << endl;
        system("pause");
    }
}

void EliminarContacto(string NombreArchivo)
{
    DatosContacto contacto;
    bool encontrado = false;
    string nombreBuscado = "";
    
    // 1. Abrir el archivo para lectura y escritura utilizar el fstream y los parámetros ios::in | ios::out 
    fstream archivo;
    archivo.open(NombreArchivo, ios::in | ios::out | ios::binary);
    if (archivo.good())
    {
        // 2. Buscar el contacto a modificar
        system("cls");
        cout << "CONTACTO PARA ELIMINAR" << endl;
        cout << "=======================" << endl;
        cout << "Ingrese el nombre del contacto a modificar: ";
        cin.ignore();
        getline(cin, nombreBuscado);
        while (archivo.read((char*)&contacto, sizeof(DatosContacto)))
        {
            if (nombreBuscado == contacto.nombre && !contacto.eliminado)
            {
                cout << "\nCONTACTO ENCONTRADO: " << contacto.nombre << endl;
                cout << "-----------------------------------" << endl;
                cout << "\tTelefono: " << contacto.telefono << endl;
                cout << "\tCelular: " << contacto.celular << endl;
                cout << "\tEmail: " << contacto.email << endl;
                cout << "-----------------------------------" << endl;
                encontrado = true;
                // Mover el puntero de escritura al inicio del registro encontrado
                archivo.seekg(-sizeof(DatosContacto), ios::cur);
                // Cambio el campo eliminado a true para eliminarlo de manera lógica.
                contacto.eliminado = true;
                // Escribir los nuevos datos en el archivo binario
                archivo.write((char*)&contacto, sizeof(DatosContacto));
                cout << "Contacto eliminado correctamente." << endl;    
            }
        }
        if (!encontrado)
        {
            cout << "Contacto no encontrado." << endl;
        }
        system("pause");
        // 3. Cerrar el archivo
        archivo.close();
    }
    else
    {
        cout << "No es posible abrir el archivo (" << NombreArchivo << ")."  << endl;
        system("pause");
    }
}