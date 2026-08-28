#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    float b = 4.5;
    char c = 'C';
    bool bandera = true;

    do
    {
        a = a + 3;
        b = b - 0.5;
    }while (a < 5);

    while (bandera)
    {
        if (a % 2 != 0)
        { 
            a++;          
            c = 'B';
        }
        else
        {          
            bandera = false;
            c = 'A';
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        if (i%2 != 0)
        {
            b = b * i; 
        }
        else
        {
            a = a - 1;    
        }
    }

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Valor de bandera: " << bandera << endl;

    return 0;
}