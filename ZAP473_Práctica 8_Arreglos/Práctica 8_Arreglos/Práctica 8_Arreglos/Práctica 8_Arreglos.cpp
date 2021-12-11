// Clase Práctica 8_Arreglos.cpp 
// ZAP473 Kevin de Jesús Velázquez Cabrera
// Demostrar el funcionamiento de los arreglos implementandose para el registro en una base de datos

#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
	struct datosJuegos //Estructura para almacenar los datos para su posterior uso en el código
	{
		char titulo[40];
		int fecha;
		char autor[40];
	};
	datosJuegos titulos[10]; //Arreglo de hasta 10 titulos

	int cantidad = 0; //Se inicia la variable cantidad en 0 para que se almacenen los títulos
	int opcion; //Variable de opción para ingresar la opción de elección de acción en el código


	do
	{
		cout << "Este es un programa de registro de juegos de mesa para crear un inventario" << endl;
		cout << "******Opciones del programa******" << endl;
		cout << "1. A\244adir Titulo" << endl;
		cout << "2. Ver todos los Titulos" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "Introduce los datos del juego de mesa: " << endl;
			cout << "Juego No.: " << cantidad + 1 << endl;
			cout << "Titulo: " << endl;
			cin.ignore();
			cin.getline(titulos[cantidad].titulo, 40);
			//cin >> titulos[cantidad].titulo;

			cout << "A\244o de publicacion: " << endl;
			cin >> titulos[cantidad].fecha;
			cout << "Autor: " << endl;
			cin.ignore(); //Para la utilizacion de getline se deberá colocar este comando para limpiar el buffer
			cin.getline(titulos[cantidad].autor, 40); //Sintaxis para el getline, adentro del paréntesis se ingresa el nombre de la varible y se separa por una coma el valor límite de caracteres ingresados
			//cin >> titulos[cantidad].autor;

			cantidad++;
			system("cls"); //Comando para limpiar la pantalla
		case 2:
			for (int i = 0; i < cantidad; i++)
			{
				cout << i + 1 << " " << titulos[i].titulo << ". " << titulos[i].fecha << ". " << titulos[i].autor << endl;
				//Muestra el total de titulos ingresados, con todos los datos, separados por un espacio " "

			}

		}


	} while (opcion != 0); //Se repetira el ciclo hasta que se ingrese una opcion sea 0, en ese caso terminará el programa


}
