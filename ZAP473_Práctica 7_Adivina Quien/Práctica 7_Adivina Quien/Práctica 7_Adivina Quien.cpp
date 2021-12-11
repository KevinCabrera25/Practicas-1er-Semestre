// Práctica 7_Adivina Quien.cpp 
// Kevin de Jesús Velázquez Cabrera
// Crear un juego de adivinanzas, en donde el usuario eligirá entre ciertos personajes
// mediante preguntas se irán descartando las posibilidades hasta encontrar el personaje elegido

#include <iostream>
using namespace std;


int main()
{
	string respuesta = "Si";
	string respuesta_in;
	bool bandera = false;
	int n;

	do
	{
		cout << "Escoge uno de los siguientes personajes relacionado al mundo Avatar y yo tratare de adivinarlo." << endl;
		cout << "Opciones:" << endl;
		cout << "*Aang" << endl;
		cout << "*Katara" << endl;
		cout << "*Toph" << endl;
		cout << "*Sokka" << endl;
		cout << "*Zuko" << endl;

		cout << "Estas listo?" << endl;
		cin >> respuesta_in;

		if (respuesta == respuesta_in)
		{
			system("cls");
			cout << "Empecemos a jugar =)" << endl;

		}
		else
		{
			cout << "Tomate tu tiempo" << endl;
			cout << "Estas listo?" << endl;
			cin >> respuesta_in;
			if (respuesta == respuesta_in)
			{
				system("cls"); //Comando para limpiar la pantalla
				cout << "Empecemos a jugar =)" << endl;;
			}
		}
		//Empieza la ronda de preguntas
		cout << "Tu personaje es de la Tribu Agua del Sur?" << endl;
		cin >> respuesta_in;

		if (respuesta == respuesta_in)
		{
			cout << "Tu personaje tiene hermana/o?" << endl;
			cin >> respuesta_in;

			if (respuesta == respuesta_in)
			{
				cout << "Tu personaje domina el arte del boomerang?" << endl;
				cin >> respuesta_in;

				if (respuesta == respuesta_in)
				{
					cout << "Tu personaje es Sokka" << endl;
				}
				else
				{
					cout << "Tu personaje es maestra agua control?" << endl;
					cin >> respuesta_in;

					if (respuesta == respuesta_in)
					{
						cout << "Tu personaje es Katara" << endl;
					}
					else
					{
						cout << "Me has ganado" << endl;
					}
				}
			}
			else
			{
				cout << "Me has ganado" << endl;
			}
		}
		else 
		{
			cout << "Tu personaje es maestro/a control?" << endl;
			cin >> respuesta_in;

			if (respuesta == respuesta_in)
			{
				cout << "Tu personaje tiene cabello?" << endl;
				cin >> respuesta_in;

				if (respuesta == respuesta_in)
				{
					cout << "Tu personaje es de la Nacion del Fuego?" << endl;
					cin >> respuesta_in;

					if (respuesta == respuesta_in)
					{
						cout << "Tu personaje tiene un tio al que le gusta tomar te?" << endl;
						cin >> respuesta_in;

						if (respuesta == respuesta_in)
						{
							cout << "Pensaste en el Principe Zuko" << endl;
						}
						else
						{
							cout << "Me has ganado" << endl;
						}
					}
					else
					{
						cout << "Tu personaje es del Reino Tierra?" << endl;
						cin >> respuesta_in;

						if (respuesta == respuesta_in)
						{
							cout << "Tu personaje mira con los pies?" << endl;
							cin >> respuesta_in;

							if (respuesta == respuesta_in)
							{
								cout << "Tu personaje es Toph Beifong" << endl;
							}
							else
							{
								cout << "Me has ganado" << endl;
							}
						}
						else
						{ 
							cout << "Me has ganado" << endl;
						}
					}
				}
				else                  
				{
					cout << "Tu personaje es un nomada aire?" << endl;
					cin >> respuesta_in;

					if (respuesta == respuesta_in)
					{
						cout << "Tu personaje tiene a un mono volador?" << endl;
						cin >> respuesta_in;

						if (respuesta == respuesta_in)
						{
							cout << "Tu personaje es el Avatar Aang" << endl;
						}
						else
						{
							cout << "Me has ganado" << endl;
						}
					}
					else
					{
						cout << "Me has ganado" << endl;
					}
				}
			}
			else
			{
				cout << "Me has ganado" << endl;
			}
		}






		int n;
		cout << "Quieres volver a jugar?" << endl;
		cout << "Digita 1 para Si" << endl;
		cout << "Digita 2 para No" << endl;
		cin >> n;
		if (n == 2) //Asignamos para el entero 2 el valor para sair del bucle
		{
			bandera = true; // Si la bandera es cierta se termina el bucle del código 
		}
		

	} while (bandera == false); // Fin de la estructura Do-While. Si la bandera es falsa el código se repite en bucle
	


}
