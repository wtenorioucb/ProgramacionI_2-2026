#include <iostream>

using namespace std;

int calculo(int valor1, bool sw);
int operacion(int valor2);

int main()
{
    cout << "El resultado es: " << operacion(2578);
    return 0;
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
    while (valor2 != 0)
    {
        valor3 += calculo(valor2, true);
        valor2 = calculo(valor2, false);
    }
    return valor3;
}
