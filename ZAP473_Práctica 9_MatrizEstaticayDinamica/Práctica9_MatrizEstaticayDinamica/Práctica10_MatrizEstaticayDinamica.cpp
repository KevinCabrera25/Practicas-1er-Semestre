// Práctica10_MatrizEstaticayDinamica.cpp .
// Kevin de Jesús Velázquez Cabrera
// El objetivo de esta práctica será crear matrices y diferenciar entre las estáticas y las dinámicas 

#include <iostream>
#include <ctime> //Rand Matriz Estática
#include <cstdlib> //Matriz Estática
#include <iomanip> //Matriz Estática
#include <conio.h> //Matriz Dinámica
#include <stdlib.h> //Matriz Dinámica Función new y delete

using namespace std;

/*
const int fil = 3;
const int col = 2;


class MATRIZ
{
public:
	void Matriz()
	{
		for (int f = 0; f < fil; f ++)
		{
			for (int c = 0; c < col; c ++)
			{
				_Matriz[f][c] = 0;
			}
		}
	}

	void Llenar()
	{
		srand(time(0));
		for (int f = 0; f < fil; f++)
		{
			for (int c = 0; c < col; c++)
			{
				_Matriz[f][c] = rand() % 10;
			}
		}
	}


	void Mostrar()
	{
		for (int f = 0; f < fil; f++)
		{
			for (int c = 0; c < col; c++)
			{
				cout << setw(3) << _Matriz[f][c] << " ";
			} cout << endl;
		}


	}

private:
	int _Matriz[fil][col];
};

int main()
{
	MATRIZ Ma1;
	Ma1.Llenar();
	Ma1.Mostrar();
	
}
*/




void IngresoDatos();
void MuestraDatos(int **, int, int); //** = variable puntero puntero el cual almacena toda la dirección de la Matriz, int = NoFil, int = NoCol

int** Puntero_Matriz, NoFil, NoCol;


int main()
{
	IngresoDatos();
	MuestraDatos(Puntero_Matriz, NoFil, NoCol);

	//Liberación de memoria para las filas y las columnas
	for (int i = 0; i < NoFil; i++)
	{
		delete[] Puntero_Matriz[i]; //Liberacion memoria de filas
	}

	delete[] Puntero_Matriz; //Liberación de la memoria de columnas
}

void IngresoDatos()
{
	cout << "Ingrese el numero de filas de la matriz: " << endl;
	cin >> NoFil;
	cout << "Ingrese el numero de columnas de la matriz: " << endl;
	cin >> NoCol;

	//Reservar memoria en la Matriz Dinámica
	Puntero_Matriz = new int* [NoFil]; //Reserva memoria para las filas. Puntero ya que señala a las columnas
	for (int i = 0; i < NoFil; i++)
	{
		Puntero_Matriz[i] = new int[NoCol]; //Reserva memoria para las columnas

	}

	//Se pide al usuario todos los elementos de la matriz
	cout << "Ingrese los elementos de la matriz: " << endl;
	for (int i = 0; i < NoFil; i++)
	{
		for (int j = 0; j < NoCol; j++)
		{
			cout << "Ingrese un numero ["<<i<<"]["<<j<<"]: " << endl;
			cin >> *(*(Puntero_Matriz + i) + j);
		}
	}
}

void MuestraDatos(int** Puntero_Matriz, int NoFil, int NoCol)
{
	cout << "Impresion de la matriz: " << endl;
	for (int i = 0; i < NoFil; i++)
	{
		for (int j = 0; j < NoCol; j++)
		{
			//cout << setw(3) << "[" << * (*(Puntero_Matriz + i) + j) << "]" << endl; // Punteros
			cout << setw(3) << "[" << Puntero_Matriz[i][j] << "]" << " ";
		}
		cout << "\n";
	}
}
