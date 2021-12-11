// MathLibrary.h
// Kevin de Jesús Velázquez Cabrera
// El objetivo de esta practica será crear una librería estática

#pragma once // Desde Solution Explorer se agrega un Header File (.h)

namespace MathLibrary
{
    class Arithmetic // Se declara una nueva clase para la resolución de problemas aritméticos básicos
    {
    public:
        // Returns a + b
        static double Add(double a, double b); // Adición

        // Returns a - b
        static double Subtract(double a, double b); // Sustracción

        // Returns a * b
        static double Multiply(double a, double b); // Multiplicación

        // Returns a / b
        static double Divide(double a, double b); // División
    };
}
