// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
   /* std::string str;
    std::cin >> str;
    std::cout << str;
    */

   std::string str;
   std::cout << "Please Insert First Name: "  << std::flush;
   std::cin >> str;
   std::cout << "Welcome " << str << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
