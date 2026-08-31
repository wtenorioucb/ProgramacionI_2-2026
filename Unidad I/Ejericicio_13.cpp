#include <iostream>

using namespace std;

bool salida(int n);
int calculo(int valor1, bool sw);
int operacion(int valor2);

int main()
{
    cout << "El resultado es: " << operacion(78659);
    return 0;
}

bool salida(int num)
{
    int d = 0;
    bool band = true;
    if (num > 1)
    {
        d = 2;
        while (d < num && band) 
        {
            if (num % d == 0)
            {
                band = false;
            }
            d++;
        }        
    }
    return band;
}

int calculo(int valor1, bool sw)
{
    if (sw)
    {
        valor1 = valor1 % 10;
    }
    else
    {
        valor1 = valor1 / 10;
    }
    return valor1;
}

int operacion(int valor2)
{
    int valor3 = 0;
    int aux = 0;
    while (valor2 != 0)
    {
        aux = calculo(valor2, true);
        if (salida(aux))
        {
            valor3 += aux;
        }
        valor2 = calculo(valor2, false);
    }
    return valor3;
}