// MathLibrary.cpp
// Generando un nuevo item desde Solution Explorer
// Se usa este c�digo fuente para implemetar la clase Arithmetic

// Proceso de construcci�n de programa en 2 pasos para compilarlo en Command Line
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "MathLibrary.h" // Se incluye la librer�a

namespace MathLibrary
{
    double Arithmetic::Add(double a, double b)
    {
        return a + b;
    }

    double Arithmetic::Subtract(double a, double b)
    {
        return a - b;
    }

    double Arithmetic::Multiply(double a, double b)
    {
        return a * b;
    }

    double Arithmetic::Divide(double a, double b)
    {
        return a / b;
    }
}