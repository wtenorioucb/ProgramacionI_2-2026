#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Prototipar las funciones
int GeneraNumeroAleatorio(int min, int max);

int main()
{
    int min = 0;
    int max = 0;
    int auxiliar = 0;
    srand(time(NULL)); // Semilla
    // Manera 1
    cout << "Numero aleatorio entre 1 y 10 = " << GeneraNumeroAleatorio(1,10) << endl;
    cout << "Numero aleatorio entre 100 y 1000 = " << GeneraNumeroAleatorio(100,1000) << endl;
    cout << "Numero aleatorio entre 20 y 40 = " << GeneraNumeroAleatorio(20,40) << endl;
    cout << "Numero aleatorio entre 257 y 968 = " << GeneraNumeroAleatorio(257,968) << endl;

    // Manera 2
    cout << "Ingrese el valor minimo: ";
    cin >> min;
    cout << "Ingrese el valor maximo: ";
    cin >> max;
    cout << "Numero aleatorio entre " << min << " y " << max << " = " << GeneraNumeroAleatorio(min,max) << endl;

    // Manera 3
    min = GeneraNumeroAleatorio(1,100);
    max = GeneraNumeroAleatorio(1,100);
    if (min > max)
    {
        auxiliar = min;
        min = max;
        max = auxiliar;
    }
    cout << "Numero aleatorio entre " << min << " y " << max << " = " << GeneraNumeroAleatorio(min,max) << endl;
    
    return 0;
}

char GeneraNumeroAleatorio(int min, int max)
{
    int numeroAleatorio = 0;
    numeroAleatorio = (rand() % ( max - min + 1 ) ) + min;
    return numeroAleatorio;
}