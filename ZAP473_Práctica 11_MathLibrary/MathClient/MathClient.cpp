// MathClient.cpp 
// Kevin de Jes�s Vel�zquez Cabrera
// Cliente que usar� la funcionalidad de la librer�a MathLibrary creada previamente

// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "MathLibrary.h" // Llamando a la librer�a previamente creada


int main()
{
    double a = -95.6;
    double b = 565861;
    // Referenciando a cada funci�n de la clase Arithmetic
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