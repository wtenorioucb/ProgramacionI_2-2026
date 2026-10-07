#include <iostream>
using namespace std;

void MostrarTablero(char tablero[3][3]);
void Jugadas(char tablero[3][3]);
bool VerificarGanador(char tablero[3][3], char jugador);

int main() {
    char tablero[3][3] = { {'1','2','3'},{'4','5','6'}, {'7','8','9'} };//matriz de tipo char 
    Jugadas(tablero);
    return 0;
}

// Funcion para mostrar el tablero
void MostrarTablero(char tablero[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << tablero[i][j] << " ";
            if (j < 2)
                cout << "|";
        }
        cout << "\n";
        if (i < 2) 
            cout << "---|---|---\n";
    }
    cout << "\n";
}

// Funcion para realizar las jugadas
void Jugadas(char tablero[3][3])
{
    int turno = 0;
    int movimiento;
    char jugador;// determinar si sera X o O
    bool ganador = false;
    int movimientosHechos = 0;
    do
    {
        MostrarTablero(tablero);
        if (turno % 2 == 0)
            jugador = 'X';
        else
            jugador = 'O';
        cout << "turno del jugador " << jugador << ".\nIngresa el numero de la casilla: ";
        cin >> movimiento;
        if (movimiento < 1 || movimiento > 9)
        {
            cout << "movimiento inválido. Intenta de nuevo.\n";
        }
        //saber posicion de la matriz
        int fila = (movimiento - 1) / 3;
        int columna = (movimiento - 1) % 3;
        if (tablero[fila][columna] == 'X' || tablero[fila][columna] == 'O')
        {
            cout << "casilla ocupada. Intenta de nuevo.\n";
        }
        tablero[fila][columna] = jugador;
        movimientosHechos++;
        if (VerificarGanador(tablero, jugador))
        {
            MostrarTablero(tablero);
            cout << "el jugador " << jugador << " gana\n";
            ganador = true;
        }
        turno++;
    } while (!ganador && movimientosHechos < 9); //condicional,estara en bucle si no hay ganador y los movimientos son menos de nueve
    
    // Si no hay ganador, es empate
    if (!ganador)
    {
        MostrarTablero(tablero);
        cout << "es empate\n";
    }
}

// Función para verificar si hay un ganador
bool VerificarGanador(char tablero[3][3], char jugador)
{
    for (int i = 0; i < 3; i++)
    {
        if ((tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) ||
            (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador))
            return true;
    }
    if ((tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) ||
        (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador))
        return true;
    return false;
}