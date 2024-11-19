// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main()
{
    int farhenheit = 100;
    int celcius;

    celcius = ((float)5 / 9.0) * (farhenheit - 32);

    std::cout << "Farenheit: " << farhenheit << std::endl;
    std::cout << "Celcius: " << celcius << std::endl;

    float weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float:" << weight << std::endl;
    std::cout << "Interger Part:" << (int) weight << std::endl;
    std::cout << "Fractional Part:" << (double)((weight -(int) weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
