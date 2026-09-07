// Materia: Programacion I, Paralelo 4
//Autor: Ignacio Eduardo Franichevich Cadima
//Carrera: Ingenieria Mecatronica
//fecha creacion: 01/09/26
#include <iostream>
using namespace std;
double promedioParciales(double n1, double n2, double n3) 
{
    return (n1 + n2 + n3) / 3;
}

double calcularNotaFinal(double n1, double n2, double n3, double examen) 
{
    double promedio = promedioParciales(n1, n2, n3);
    return (promedio * 0.5) + (examen * 0.5);
}

bool notasValidas(double n1, double n2, double n3) 
{
    return n1 >= 0 && n1 <= 100 &&
           n2 >= 0 && n2 <= 100 &&
           n3 >= 0 && n3 <= 100;
}

bool puedeDarExamen(double n1, double n2, double n3)
{
    return n1 >= 60 && n2 >= 60 && n3 >= 60;
}

bool aprobo(double notaFinal)
{
    return notaFinal >= 51;
}
int main() {
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;
    int aprobados = 0;
    int reprobados = 0;
    double sumaNotasFinales = 0;
    for (int i = 1; i <= N; i++) {

        double parcial1, parcial2, parcial3;
        double examen;
        double notaFinal;
        cout << " ESTUDIANTE " << i << endl;
        cout << "Nota parcial 1: ";
        cin >> parcial1;
        cout << "Nota parcial 2: ";
        cin >> parcial2;
        cout << "Nota parcial 3: ";
        cin >> parcial3;

        if (!notasValidas(parcial1, parcial2, parcial3))
        {
            cout << "Error: las notas deben estar entre 0 y 100." << endl;
            i--;
            continue;
        }

        if (!puedeDarExamen(parcial1, parcial2, parcial3)) 
        {

            cout << "\nEl estudiante NO puede dar el examen final." << endl;
            cout << "Estado: REPROBADO" << endl;
            reprobados++;
            notaFinal = promedioParciales(parcial1, parcial2, parcial3);

            cout << "Promedio de parciales: "
                 << notaFinal << endl;

            sumaNotasFinales += notaFinal;
        }
        else
        {
            cout << "Nota del examen final: ";
            cin >> examen;
            if (examen < 0 || examen > 100) 
            {
                cout << "Error: la nota debe estar entre 0 y 100." << endl;
                i--;
                continue;
            }

            notaFinal = calcularNotaFinal(parcial1,parcial2,parcial3,examen);
            cout << "RESULTADOS" << endl;
            cout << "Nota parcial 1: " << parcial1 << endl;
            cout << "Nota parcial 2: " << parcial2 << endl;
            cout << "Nota parcial 3: " << parcial3 << endl;
            cout << "Examen final: " << examen << endl;
            cout << "Nota final: " << notaFinal << endl;

            if (aprobo(notaFinal)) 
            {
                cout << "Estado: APROBADO" << endl;
                aprobados++;
            }
            else 
            {
                cout << "Estado: REPROBADO" << endl;
                reprobados++;
            }

            sumaNotasFinales += notaFinal;
        }
    }

    double porcentajeAprobados = (double)aprobados / N * 100;
    double porcentajeReprobados = (double)reprobados / N * 100;
    double promedioFinal = sumaNotasFinales / N;
    cout << " RESULTADOS GENERALES" << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: "  << reprobados << endl;
    cout << "Porcentaje de aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Porcentaje de reprobados: " << porcentajeReprobados << "%" << endl;
    cout << "Promedio de notas finales: " << promedioFinal << endl;

    return 0;
}