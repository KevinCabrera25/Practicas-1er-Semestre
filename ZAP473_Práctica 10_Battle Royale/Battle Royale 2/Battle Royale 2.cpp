// Battle Royale.cpp 
// Kevin de Jesús

#include <iostream>
#include <time.h>

using namespace std;

struct Jugadores
{
	int Quimica = 0;
	int Fisica = 0;
	int Algebra = 0;
	int Geometria = 0;
	string Nombre = " ";

}Contendientes[19];

//Prototipo de Funciones
void Asignacion();
void Comparacion();
void Imprimir();
//Se declaran las varibles globales
string MedallaQuimica, MedallaFisica, MedallaAlgebra, MedallaGeometria = " ";
string UltimoQuimica, UltimoFisica, UltimoAlgebra, UltimoGeometria = " ";



void main()
{
	Asignacion();
	Comparacion();
	Imprimir();

}

void Asignacion()
{
	//Asignacion de Jugadores
	Contendientes[0].Nombre = "Karen";
	Contendientes[1].Nombre = "Alejandro";
	Contendientes[2].Nombre = "Angel Jacinto";
	Contendientes[3].Nombre = "Dylan";
	Contendientes[4].Nombre = "Ricardo";
	Contendientes[5].Nombre = "Josue";
	Contendientes[6].Nombre = "Yuss";
	Contendientes[7].Nombre = "Ferchus";
	Contendientes[8].Nombre = "Kuvassi";
	Contendientes[9].Nombre = "Angel Uriel";
	Contendientes[10].Nombre = "Shasho";
	Contendientes[11].Nombre = "Isra";
	Contendientes[12].Nombre = "Pato";
	Contendientes[13].Nombre = "Chilo";
	Contendientes[14].Nombre = "JP";
	Contendientes[15].Nombre = "Eric";
	Contendientes[16].Nombre = "Rodrigo";
	Contendientes[17].Nombre = "Abraham";
	Contendientes[18].Nombre = "Kevin";

	srand(time(NULL));
	for (int i = 0; i < 19; i++) //Ciclo para analisis de cada Contendiente (19)
	{
		//Asignacion de Habilidades de cada Contendiente
		Contendientes[i].Quimica = rand() % 10;
		Contendientes[i].Fisica = rand() % 10;
		Contendientes[i].Algebra = rand() % 10;
		Contendientes[i].Geometria = rand() % 10;

	}

	//Se imprimen todos los datos de cada contendiente
	for (int i = 0; i < 19; i++)
	{
		cout << "Nombre del Contendiente: " << Contendientes[i].Nombre << endl << "Estadisticas en Quimica: " << Contendientes[i].Quimica << endl << "Estadisticas en Fisica: " << Contendientes[i].Fisica << endl << "Estadisticas en Algebra: " << Contendientes[i].Algebra << endl << "Estadisticas en Geometria: " << Contendientes[i].Geometria << endl << endl << endl;
	}

}

void Comparacion()
{
	//Declaracion de variables de control
	int delantera = 0;
	int ultimo = 10;
	int desempate = 0;
	srand(time(NULL));
	for (int i = 0; i < 19; i++)
	{
		//Compara Quimica
		if (Contendientes[i].Quimica > delantera)
		{
			MedallaQuimica = Contendientes[i].Nombre; //Remplaza nombres
			delantera = Contendientes[i].Quimica; //Se guarda al jugador que va ganando
		}
		//Condicion de desempate

		if (Contendientes[i].Quimica == delantera)
		{
			desempate = rand() % 1;
			if (desempate == 1) //Si gana el segundo contendiente o no
			{
				MedallaQuimica = Contendientes[i].Nombre; //Remplaza nombres
				delantera = Contendientes[i].Quimica; //Se guarda al jugador que va ganando
			}
		}

		if (Contendientes[i].Quimica < ultimo) //Compara al ultimo lugar
		{
			UltimoQuimica = Contendientes[i].Nombre; //Remplaza nombres
			ultimo = Contendientes[i].Quimica; //Se guarda al jugador que va perdiendo
		}

	}
	//Se reinician las variables de control
	delantera = 0;
	ultimo = 10;

	for (int i = 0; i < 19; i++)
	{
		//Compara Fisica
		if (Contendientes[i].Fisica > delantera)
		{
			MedallaFisica = Contendientes[i].Nombre; //Remplaza nombres
			delantera = Contendientes[i].Fisica; //Se guarda al jugador que va ganando
		}
		//Condicion de desempate

		if (Contendientes[i].Fisica == delantera)
		{
			desempate = rand() % 1;
			if (desempate == 1) //Si gana el segundo contendiente o no
			{
				MedallaFisica = Contendientes[i].Nombre; //Remplaza nombres
				delantera = Contendientes[i].Fisica; //Se guarda al jugador que va ganando
			}
		}

		if (Contendientes[i].Fisica < ultimo) //Compara al ultimo lugar
		{
			UltimoFisica = Contendientes[i].Nombre; //Remplaza nombres
			ultimo = Contendientes[i].Fisica; //Se guarda al jugador que va perdiendo
		}
	}

	//Se reinician las variables de control
	delantera = 0;
	ultimo = 10;

	for (int i = 0; i < 19; i++)
	{
		//Compara Algebra
		if (Contendientes[i].Algebra > delantera)
		{
			MedallaAlgebra = Contendientes[i].Nombre; //Remplaza nombres
			delantera = Contendientes[i].Algebra; //Se guarda al jugador que va ganando
		}
		//Condicion de desempate

		if (Contendientes[i].Algebra == delantera)
		{
			desempate = rand() % 1;
			if (desempate == 1) //Si gana el segundo contendiente o no
			{
				MedallaAlgebra = Contendientes[i].Nombre; //Remplaza nombres
				delantera = Contendientes[i].Algebra; //Se guarda al jugador que va ganando
			}
		}

		if (Contendientes[i].Algebra < ultimo) //Compara al ultimo lugar
		{
			UltimoAlgebra = Contendientes[i].Nombre; //Remplaza nombres
			ultimo = Contendientes[i].Algebra; //Se guarda al jugador que va perdiendo
		}
	}

	//Se reinician las variables de control
	delantera = 0;
	ultimo = 10;

	for (int i = 0; i < 19; i++)
	{
		//Compara Geometria
		if (Contendientes[i].Geometria > delantera)
		{
			MedallaGeometria = Contendientes[i].Nombre; //Remplaza nombres
			delantera = Contendientes[i].Geometria; //Se guarda al jugador que va ganando
		}
		//Condicion de desempate

		if (Contendientes[i].Geometria == delantera)
		{
			desempate = rand() % 1;
			if (desempate == 1) //Si gana el segundo contendiente o no
			{
				MedallaGeometria = Contendientes[i].Nombre; //Remplaza nombres
				delantera = Contendientes[i].Geometria; //Se guarda al jugador que va ganando
			}
		}

		if (Contendientes[i].Geometria < ultimo) //Compara al ultimo lugar
		{
			UltimoGeometria = Contendientes[i].Nombre; //Remplaza nombres
			ultimo = Contendientes[i].Geometria; //Se guarda al jugador que va perdiendo
		}
	}

}

void Imprimir()
{
	//Se nombran a los ganadores llamando a las variables globales
	cout << "El Contendiente " << MedallaQuimica << " ha ganado medalla de oro en Quimica" << endl;
	cout << "El Contendiente " << MedallaFisica << " ha ganado medalla de oro en Fisica" << endl;
	cout << "El Contendiente " << MedallaAlgebra << " ha ganado medalla de oro en Algebra" << endl;
	cout << "El Contendiente " << MedallaGeometria << " ha ganado medalla de oro en Geometria" << endl;

	//Se nombran a los ultimos lugares llamando a las variables globales
	cout << "El Contendiente " << UltimoQuimica << " ha quedado en ultimo lugar en la prueba de Quimica" << endl;
	cout << "El Contendiente " << UltimoFisica << " ha quedado en ultimo lugar en la prueba de Fisica" << endl;
	cout << "El Contendiente " << UltimoAlgebra << " ha quedado en ultimo lugar en la prueba de Algebra" << endl;
	cout << "El Contendiente " << UltimoGeometria << " ha quedado en ultimo lugar en la prueba de Geometria" << endl;

}