// Práctica 6_BatallaPokemon2.cpp 
// Kevin de Jesús Velázquez Cabrera
// Creación de batalla en consola. La batalla séra por comparación de números


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
using namespace std;

void ayuda(void);
void atacar();
void pociones();
void informacion();
void ganador();



typedef struct {

	char nombre[25];
	int pv;
	const char* ataque[4];
	int pd[4];
	int pp[4];
	int pociones;

} pokemon;

pokemon pokemon1;
pokemon pokemon2;
int turno = 1;

int main()
{
	
	
		strcpy_s(pokemon1.nombre, "Charmander");
		//Vida del pokemon
		pokemon1.pv = 100;
		//Nombre de los 4 ataques del pokemon
		pokemon1.ataque[0] = "Scratch"; pokemon1.ataque[1] = "Slash"; pokemon1.ataque[2] = "Flamethrower"; pokemon1.ataque[3] = "Dragon Rage";
		//Puntos de daño, el valor maximo de daño que causa cada ataque
		pokemon1.pd[0] = 15; pokemon1.pd[1] = 32; pokemon1.pd[2] = 53; pokemon1.pd[3] = 21;
		//Puntos de poder, las veces que podemos usar x ataque en una batalla
		pokemon1.pp[0] = 3; pokemon1.pp[1] = 30; pokemon1.pp[2] = 10; pokemon1.pp[3] = 15;
		//Numero de pociones que tiene el pokemon
		pokemon1.pociones = 2;
		
		strcpy_s(pokemon2.nombre, "Bulbasaur");
		//Vida del pokemon
		pokemon2.pv = 100;
		//Nombre de los 4 ataques del pokemon
		pokemon2.ataque[0] = "Vine Whip"; pokemon2.ataque[1] = "Razor Leaf"; pokemon2.ataque[2] = "Take Down"; pokemon2.ataque[3] = "Seed Bomb";
		//Puntos de daño, el valor maximo de daño que causa cada ataque
		pokemon2.pd[0] = 14; pokemon2.pd[1] = 34; pokemon2.pd[2] = 50; pokemon2.pd[3] = 23;
		//Puntos de poder, las veces que podemos usar x ataque en una batalla
		pokemon2.pp[0] = 3; pokemon2.pp[1] = 30; pokemon2.pp[2] = 10; pokemon2.pp[3] = 15;
		//Numero de pociones que tiene el pokemon
		pokemon2.pociones = 3;


			char comando;

			ayuda();

			while (1)
			{

				if (turno == 1)
					printf("[%s]", pokemon1.nombre);
				else
					printf("[%s]", pokemon2.nombre);
	


				printf("Introduce la orden...");
				comando = fgetc(stdin);
				while (fgetc(stdin) != '\n');
				switch (comando)
				{

				case 'h':
					ayuda();
					break;;
				case 'a':
					atacar();
					break;;
				case 'p':
					pociones();
					break;;
				case 'i':
					informacion();
					break;;
				case 'e':
					printf("Se cancelo la partida\n");
					exit(0);
				default:
					ayuda();

				}
			}
			
}

void ayuda()
{

	printf("h -> Despliega esta ayuda\n");
	printf("a -> Ataca al pokemon enemigo\n");
	printf("p -> Cura a tu pokemon si tienes pociones\n");
	printf("i -> Da informacion sobre tu pokemon, ataques, pociones y el pv enemigo\n");
	printf("e -> Cancelar la partida\n");

}

void atacar()
{

	int dano;
	char ataque;

	printf("Elige el ataque a usar [1-4]\n");

	ataque = fgetc(stdin);
	while (fgetc(stdin) != '\n');

	if (turno == 1)
	{

		switch (ataque)
		{

		case '1':
			if (pokemon1.pp[0] == 0) { printf("no te quedan pp\n"); turno = 2; break;; }
			dano = (pokemon1.pd[0]);
			printf("%s uso %s\n", pokemon1.nombre, pokemon1.ataque[0]);
			pokemon1.pp[0]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon2.pv -= dano;
			if (pokemon2.pv <= 0)
				ganador();
			turno = 2;
			break;;
		case '2':
			if (pokemon1.pp[1] == 0) { printf("no te quedan pp\n"); turno = 2; break;; }
			dano = (pokemon1.pd[1]);
			printf("%s uso %s\n", pokemon1.nombre, pokemon1.ataque[1]);
			pokemon1.pp[1]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon2.pv -= dano;
			if (pokemon2.pv <= 0)
				ganador();
			turno = 2;
			break;;
		case '3':
			if (pokemon1.pp[2] == 0) { printf("no te quedan pp\n"); turno = 2; break;; }
			dano = (pokemon1.pd[2]);
			printf("%s uso %s\n", pokemon1.nombre, pokemon1.ataque[2]);
			pokemon1.pp[2]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon2.pv -= dano;
			if (pokemon2.pv <= 0)
				ganador();
			turno = 2;
			break;;
		case '4':
			if (pokemon1.pp[3] == 0) { printf("no te quedan pp\n"); turno = 2; break;; }
			dano = (pokemon1.pd[3]);
			printf("%s uso %s\n", pokemon1.nombre, pokemon1.ataque[3]);
			pokemon1.pp[3]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon2.pv -= dano;
			if (pokemon2.pv <= 0)
				ganador();
			turno = 2;
			break;;
		default:
			printf("no has elegido ninguna opcion, así que pierdes el turno\n");
			turno = 2;
			break;;

		}

	}
	else
	{

		switch (ataque)
		{

		case '1':
			if (pokemon2.pp[0] == 0) { printf("no te quedan pp\n"); turno = 1; break;; }
			dano = (pokemon2.pd[0]);
			printf("%s uso %s\n", pokemon2.nombre, pokemon2.ataque[0]);
			pokemon2.pp[0]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon1.pv -= dano;
			if (pokemon1.pv <= 0)
				ganador();
			turno = 1;
			break;;
		case '2':
			if (pokemon2.pp[1] == 0) { printf("no te quedan pp\n"); turno = 1; break;; }
			dano = (pokemon2.pd[1]);
			printf("%s uso %s\n", pokemon2.nombre, pokemon2.ataque[1]);
			pokemon2.pp[1]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon1.pv -= dano;
			if (pokemon1.pv <= 0)
				ganador();
			turno = 1;
			break;;
		case '3':
			if (pokemon2.pp[2] == 0) { printf("no te quedan pp\n"); turno = 1; break;; }
			dano = (pokemon2.pd[2]);
			printf("%s uso %s\n", pokemon2.nombre, pokemon2.ataque[2]);
			pokemon2.pp[2]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon1.pv -= dano;
			if (pokemon1.pv <= 0)
				ganador();
			turno = 1;
			break;;
		case '4':
			if (pokemon2.pp[3] == 0) { printf("no te quedan pp\n"); turno = 1; break;; }
			dano = (pokemon2.pd[3]);
			printf("%s uso %s\n", pokemon2.nombre, pokemon2.ataque[3]);
			pokemon2.pp[3]--;
			printf("Le has quitado %d puntos de vida\n", dano);
			pokemon1.pv -= dano;
			if (pokemon1.pv <= 0)
				ganador();
			turno = 1;
			break;;
		}

	}


}

void pociones()
{

	if (turno == 1)
	{

		turno = 2;
		if (pokemon1.pociones == 0)
		{

			printf("no tienes pociones, así que pierdes el turno\n");

		}
		else
		{

			pokemon1.pociones -= 1;
			pokemon1.pv += 60;
			if (pokemon1.pv > 100) pokemon1.pv = 100;
			printf("Pocion activa, ahora tu pv es de %d\n", pokemon1.pv);

		}


	}
	else
	{

		turno = 1;
		if (pokemon2.pociones == 0)
		{

			printf("no tienes pociones, así que pierdes el turno\n");

		}
		else
		{

			pokemon2.pociones -= 1;
			pokemon2.pv += 60;
			if (pokemon2.pv > 100) pokemon2.pv = 100;
			printf("Pocion activa, ahora tu pv es de %d\n", pokemon2.pv);

		}


	}

}

void informacion()
{


	if (turno == 1)
	{
		printf("**********\n");
		printf("%s\n", pokemon1.nombre);
		printf("pv:%d\n", pokemon1.pv);
		printf("\t-----ATAQUES-----\n");
		printf("\t%s pp:%d\n", pokemon1.ataque[0], pokemon1.pp[0]);
		printf("\t%s pp:%d\n", pokemon1.ataque[1], pokemon1.pp[1]);
		printf("\t%s pp:%d\n", pokemon1.ataque[2], pokemon1.pp[2]);
		printf("\t%s pp:%d\n", pokemon1.ataque[3], pokemon1.pp[3]);
		printf("\t-----------------\n");
		printf("Numero de pociones:%d\n", pokemon1.pociones);
		printf("pv enemigo:%d\n", pokemon2.pv);
		printf("**********\n");
	}
	if (turno == 2)
	{
		printf("**********\n");
		printf("%s\n", pokemon2.nombre);
		printf("pv:%d\n", pokemon2.pv);
		printf("\t-----ATAQUES-----\n");
		printf("\t%s pp:%d\n", pokemon2.ataque[0], pokemon2.pp[0]);
		printf("\t%s pp:%d\n", pokemon2.ataque[1], pokemon2.pp[1]);
		printf("\t%s pp:%d\n", pokemon2.ataque[2], pokemon2.pp[2]);
		printf("\t%s pp:%d\n", pokemon2.ataque[3], pokemon2.pp[3]);
		printf("\t-----------------\n");
		printf("Numero de pociones:%d\n", pokemon2.pociones);
		printf("pv enemigo:%d\n", pokemon1.pv);
		printf("**********\n");

	}

}

void ganador() 
{
	bool bandera = true;
	int n;

	do
	{
			if (turno == 1)
			{
				printf("--------------------\n");
				printf("%s ha ganado la partida\n", pokemon1.nombre);
				printf("--------------------\n");

			}
			else
			{
				printf("--------------------\n");
				printf("%s ha ganado la partida\n", pokemon2.nombre);
				printf("--------------------\n");

			}

			int n;
			cout << "Quieres volver a jugar?" << endl;
			cout << "Digita 1 para Si" << endl;
			cout << "Digita 2 para No" << endl;
			cin >> n;
			if (n == 1) //Asignamos al entero 1 la acción de permanecer en el bucle
			{
				bandera = false; // Si la bandera es falsa se reinicia el bucle del código 
				pokemon1.pv = 100;
				pokemon2.pv = 100;
			}
			else 
			{
				(n == 2); //Asignamos al entero 2 la acción de salir del bucle
				exit(0);
			}

		
	} while (bandera == true); // Fin de la estructura Do-While. Si la bandera es cierta el código se repite en bucle


}




