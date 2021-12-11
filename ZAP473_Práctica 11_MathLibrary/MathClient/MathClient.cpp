// MathClient.cpp 
// Kevin de Jesús Velázquez Cabrera
// Cliente que usará la funcionalidad de la librería MathLibrary creada previamente

// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "MathLibrary.h" // Llamando a la librería previamente creada


int main()
{
    double a = -95.6;
    double b = 565861;
    // Referenciando a cada función de la clase Arithmetic
    std::cout << "a + b = " <<
        MathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        MathLibrary::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        MathLibrary::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}