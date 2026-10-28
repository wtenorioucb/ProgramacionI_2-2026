#include <iostream>
#include <vector>

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

void IngresoDatosPersona(vector<DatosPersona> &ListaEstudiante, int n);
void MostrarDatosPersona(vector<DatosPersona> ListaEstudiante);
void IngresoDatosPersonaV2(vector<DatosPersona> &ListaEstudiante, int n);

int main()
{
    int n = 0;
    cout << "Ingrese cantidad de estudiantes: ";
    cin >> n;
    vector<DatosPersona> ListaEstudiante(n);
    IngresoDatosPersonaV2(ListaEstudiante, n);
    MostrarDatosPersona(ListaEstudiante);
    return 0;
}

void IngresoDatosPersona(vector<DatosPersona> &ListaEstudiante, int n)
{
    DatosPersona estudiante;
    for (int i = 0; i < n; i++)
    {
        cout << "DATOS PERSONA " << i+1 << ": " << endl;
        cout << "================" << endl;
        cin.ignore();
        cout << "Ingrese su nombre: ";
        cin.getline(estudiante.nombres, 31);
        cout << "Ingrese su primer apellido: ";
        cin.getline(estudiante.primer_apellido, 31);
        cout << "Ingrese su segundo apellido: ";
        cin.getline(estudiante.segundo_apellido, 31);
        cout << "Ingrese el dia de su fecha de nacimiento: ";
        cin >> estudiante.fecha_nacimiento.dia;
        cout << "Ingrese el mes de su fecha de nacimiento: ";
        cin >> estudiante.fecha_nacimiento.mes;
        cout << "Ingrese el año de su fecha de nacimiento: ";
        cin >> estudiante.fecha_nacimiento.anio;
        cout << "Ingrese el codigo de su nacionalidad (1 = Boliviano): ";
        cin >> estudiante.nacionalidad;
        cout << "Ingrese su codigo tipo sangre: ";
        cin >> estudiante.tipo_sangre;
        ListaEstudiante.push_back(estudiante);
    }
}

void IngresoDatosPersonaV2(vector<DatosPersona> &ListaEstudiante, int n)
{
    DatosPersona estudiante;
    for (int i = 0; i < n; i++)
    {
        cout << "DATOS PERSONA " << i+1 << ": " << endl;
        cout << "================" << endl;
        cin.ignore();
        cout << "Ingrese su nombre: ";
        cin.getline(ListaEstudiante[i].nombres, 31);
        cout << "Ingrese su primer apellido: ";
        cin.getline(ListaEstudiante[i].primer_apellido, 31);
        cout << "Ingrese su segundo apellido: ";
        cin.getline(ListaEstudiante[i].segundo_apellido, 31);
        cout << "Ingrese el dia de su fecha de nacimiento: ";
        cin >> ListaEstudiante[i].fecha_nacimiento.dia;
        cout << "Ingrese el mes de su fecha de nacimiento: ";
        cin >> ListaEstudiante[i].fecha_nacimiento.mes;
        cout << "Ingrese el año de su fecha de nacimiento: ";
        cin >> ListaEstudiante[i].fecha_nacimiento.anio;
        cout << "Ingrese el codigo de su nacionalidad (1 = Boliviano): ";
        cin >> ListaEstudiante[i].nacionalidad;
        cout << "Ingrese su codigo tipo sangre: ";
        cin >> ListaEstudiante[i].tipo_sangre;
    }
}

void MostrarDatosPersona(vector<DatosPersona> ListaEstudiante) // Por valor
{
    system("cls");
    for (int i = 0; i < ListaEstudiante.size(); i++)
    {
        cout << "DATOS PERSONA " << i+1 << ": " << endl;
        cout << "================" << endl;
        cout << "Nombres: " << ListaEstudiante[i].nombres << endl;
        cout << "Apellidos: " << ListaEstudiante[i].primer_apellido << " " << ListaEstudiante[i].segundo_apellido << endl;
        cout << "Fecha de nacimiento: " << ListaEstudiante[i].fecha_nacimiento.dia << "/" << ListaEstudiante[i].fecha_nacimiento.mes << "/" << ListaEstudiante[i].fecha_nacimiento.anio << endl;
        cout << "Nacionalidad: " << ListaEstudiante[i].nacionalidad << endl;
        cout << "Tipo de Sangre: " << ListaEstudiante[i].tipo_sangre << endl;
        cout << "================" << endl;
    }
}