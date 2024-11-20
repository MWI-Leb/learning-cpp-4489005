// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main()
{
    int meat = 8;
    cow_purpose a;
    grocery_section b;

    a = cow_purpose::meat;
    b = grocery_section::meat;

    std::cout << "a = " << (int) a << std::endl;
    std::cout << "b = " << (int) b << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
