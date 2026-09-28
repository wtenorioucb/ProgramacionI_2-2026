#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio2(int min, int max);

int main()
{
    double parte_entera=0;
    double parte_decimal=0;
    double resultado = 0.0;
    
    srand(time(0));
    parte_entera = GenerarAleatorio2(20, 220);
    //parte_decimal = GenerarAleatorio(0.0,99.0);

    cout << "Parte entera: " << parte_entera << endl;
    //cout << "Parte decimal: " << parte_decimal << endl;

    resultado = parte_entera / 100;
    cout << "Resultado: " << resultado << endl;
    return 0;
}

int GenerarAleatorio2(int min, int max)
{
    return (rand() % ((max*100) - (min*100) + 1))+(min*100);
}