// 30_09_2021_Practica_Reporte4.cpp
// Kevin de Jesús Velázquez Cabrera
//Identificar y usar correctamente las palabras reservadas para la toma e impresion de datos

#include <iostream>
#include <string>

using namespace std;
struct Developer
{
	Developer() {};
	string nombre;
	string apellido1;
	string apellido2;
	int semestre;
	float materias_cargadas;
	char celular [30];
	char correo[30];
	double prom;
};

int main()
{
	printf ("Ingresa el nombre del alumno: \n");
	string nombre;
	cin >> nombre;
	cout << "Nombre: " << nombre << endl;

	printf ("Ingresa el apellido paterno del alumno: \n");
	string apellido1;
	cin >> apellido1;
	cout << "Apellido Paterno: " << apellido1 << endl;

	printf ("Ingresa el apellido materno del alumno: \n");
	string apellido2;
	cin >> apellido2;
	cout << "Apellido Materno: " << apellido2 << endl;

	printf("Semestre en el que se encuentra el alumno: \n");
	int semestre;
	cin >> semestre;
	cout << "El alumno cursa: " << semestre << " semestre" << endl;

	printf ("Ingresa las materias que cursa actualmente: \n");
	float materias_cargadas;
	cin >> materias_cargadas;
	cout << "Actualmente el alumno cursa un total de " << materias_cargadas << " materias" << endl;

	printf ("Ingresa el numero telefonico de contacto del alumno: \n");
	char celular [30];
	cin >> celular;
	cout << "Telfono de contacto: " << celular << endl;

	printf ("Ingresa el promedio actual del Alumno \n");
	double prom;
	cin >> prom;
	cout << "El promedio del alumno es: " << prom << endl;

	printf("Ingresa el correo institucional del alumno: \n");
	char correo[30];
	cin >> correo;
	cout << "Correo: " << correo << endl;


}

