#include <iostream>
#include <string>
#include <vector>

using namespace std;

string SolicitarFrase();
void MostrarParecidos(vector<string> nombres, string frase);
bool VerificarParecidos(string frase, string fraseComparar);
bool VerificarParecidos(string frase, string fraseComparar);

int main()
{
    vector<string> nombres = {"Maria", "Juan", "Pedro", "Marcos", "Juana"};
    MostrarParecidos(nombres, SolicitarFrase());
    return 0;
}

string SolicitarFrase()
{
    string fraseSolicitada="";
    system("cls");
    cout << "Ingrese una frase: ";
    getline(cin, fraseSolicitada);
    return fraseSolicitada;
}

void MostrarParecidos(vector<string> nombres, string frase)
{
    string nombreParcial="";
    for (int i = 0; i < nombres.size(); i++)
    {
        nombreParcial = nombres[i].substr(0,3);
        if (nombreParcial == frase)
        {
            cout << nombres[i] << "\t";
        }
    }   
}

