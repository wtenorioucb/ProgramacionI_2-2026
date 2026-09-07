#include <iostream>
using namespace std;

int funcion1(int ax);
void funcion2(int n);

int main() {
    int n = 8;
    funcion2(n);
    return 0;
}

int funcion1(int ax)
{
    int d1 = 1;
    int d2 = 1;
    int t = 0;
    for (int i = 1; i <= ax; i++)
    {
        if(i == 1)
        {
            t = d1;
        }
        else
        {
            if (i == 2)
            {
                t = d2;
            }
            else
            {
                t = d1 + d2;
                d1 = d2;
                d2 = t;
            }
        }
    }
    return t;
}

void funcion2(int n)
{
    int c = 0;
    int ax2 = 0;
    for (int i = 1; i <= n; i++)
    {
        ax2 = funcion1(i);
        if (ax2 % 3 == 0)
        {
            c += ax2;
        }
    }
    cout << "El resultado es: " << c;
}