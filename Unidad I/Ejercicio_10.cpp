#include <iostream>

using namespace std;

int Calculo(int n);
int Ajustar(int a, int b);

int main() {
    int x = 5;
    int y = Calculo(x);
    x = Ajustar(x, y);
    cout << "Valor final de x: " << x << endl;
    cout << "Valor final de y: " << y << endl;
    return 0;
}

int Calculo(int n) {
    int suma = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            suma += i;
        }
    }
    return suma;
}

int Ajustar(int a, int b) {
    while(a < b) {
        a += 2;
    }
    return a;
}