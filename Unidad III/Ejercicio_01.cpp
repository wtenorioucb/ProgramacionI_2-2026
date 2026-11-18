#include <iostream>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct DatosPersona
{
    char nombres[30];
    char primer_apellido[30];
    char segundo_apellido[30];
    fecha fecha_nacimiento;
    int nacionalidad;
    int tipo_sangre;
};

void IngresoDatosPersona(DatosPersona &persona);
void MostrarDatosPersona(DatosPersona persona);

int main()
{
    DatosPersona persona;
    IngresoDatosPersona(persona);
    MostrarDatosPersona(persona);
    return 0;
}

void IngresoDatosPersona(DatosPersona &persona) // Por Referencia
{
    cout << "Ingrese su nombre: ";
    cin.getline(persona.nombres, 31);
    cout << "Ingrese su primer apellido: ";
    cin.getline(persona.primer_apellido, 31);
    cout << "Ingrese su segundo apellido: ";
    cin.getline(persona.segundo_apellido, 31);
    cout << "Ingrese el dia de su fecha de nacimiento: ";
    cin >> persona.fecha_nacimiento.dia;
    cout << "Ingrese el mes de su fecha de nacimiento: ";
    cin >> persona.fecha_nacimiento.mes;
    cout << "Ingrese el año de su fecha de nacimiento: ";
    cin >> persona.fecha_nacimiento.anio;
    cout << "Ingrese el codigo de su nacionalidad (1 = Boliviano): ";
    cin >> persona.nacionalidad;
    cout << "Ingrese su codigo tipo sangre: ";
    cin >> persona.tipo_sangre;
}

void MostrarDatosPersona(DatosPersona persona) // Por valor
{
    system("cls");
    cout << "DATOS DE LA PERSONA" << endl;
    cout << "===================" << endl;
    cout << "Nombres: " << persona.nombres << endl;
    cout << "Apellidos: " << persona.primer_apellido << " " << persona.segundo_apellido << endl;
    cout << "Fecha de nacimiento: " << persona.fecha_nacimiento.dia << "/" << persona.fecha_nacimiento.mes << "/" << persona.fecha_nacimiento.anio << endl;
    cout << "Nacionalidad: " << persona.nacionalidad << endl;
    cout << "Tipo de Sangre: " << persona.tipo_sangre << endl;
}