#include <iostream>
#include <vector>

using namespace std;

void LlenarVector(vector<int> &valores);
void MostrarVector(vector<int> valores);
void EliminarPosicion(vector<int> &valores, int posicion);
void LlenarVectorV2(vector<int> &valores);

int main()
{
    int n = 0;
    int posicion = 0;
    vector<int> edades; // Definir un vector
    //cout << "Ingrese el tamaño del vector edades: ";
    //cin >> n;
    //edades.resize(n);
    LlenarVectorV2(edades);
    cout << "Vector Original" << endl;
    MostrarVector(edades);
    //cout << "\nPosicion a eliminar: ";
    //cin >> posicion;
    //EliminarPosicion(edades, posicion-1);
    //cout << "Vector Resultado" << endl;
    //MostrarVector(edades);

    // Insertamos valor
    edades.insert(edades.begin()+3, -1);
    cout << "Vector Resultado" << endl;
    MostrarVector(edades);
    return 0;
}

void LlenarVector(vector<int> &valores)
{
    for (int i = 0; i < size(valores); i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> valores[i];
    }
}

void LlenarVectorV2(vector<int> &valores)
{
    int valor = 0;
    do
    {
        cout << "Ingrese un valor (valor=0 FIN): ";
        cin >> valor;
        if (valor != 0)
            valores.push_back(valor);
    } while (valor != 0);
    
}

void MostrarVector(vector<int> valores)
{
    for (int i = 0; i < size(valores); i++)
    {
        cout << valores[i] << "\t";
    }
}

void EliminarPosicion(vector<int> &valores, int posicion)
{
    valores.erase(valores.begin()+posicion,valores.begin()+posicion+1); // Borro los elementos
}