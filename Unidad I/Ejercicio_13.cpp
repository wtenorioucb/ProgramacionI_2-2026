#include <iostream>
using namespace std;

int funcion1(int n);

int main() {
    int num1 = 220;
    int num2 = 284;
    cout << "Resultado num1: " << num1 << endl;
    cout << "Resultado num2: " << num2 << endl;
    return 0;
}

int funcion1(int n)
{
    int i, acu = 0;
    for(i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            acu += i;
        }
    }
    return acu;
}

