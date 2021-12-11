// MathLibrary.h
// Kevin de Jes�s Vel�zquez Cabrera
// El objetivo de esta practica ser� crear una librer�a est�tica

#pragma once // Desde Solution Explorer se agrega un Header File (.h)

namespace MathLibrary
{
    class Arithmetic // Se declara una nueva clase para la resoluci�n de problemas aritm�ticos b�sicos
    {
    public:
        // Returns a + b
        static double Add(double a, double b); // Adici�n

        // Returns a - b
        static double Subtract(double a, double b); // Sustracci�n

        // Returns a * b
        static double Multiply(double a, double b); // Multiplicaci�n

        // Returns a / b
        static double Divide(double a, double b); // Divisi�n
    };
}
