#include <iostream>
#include <string>
#include "name_age.hpp"

int main(int, char**) {

    std::cout << "Your Name: ";
    std::string name = readName();
    std::cout << "Your Age: ";
    int age = readAge();

    std::cout << "Hello " << name << "!\n";
    std::cout << "You're " << age << " years old." << std::endl;

    if(age < 5)
        std::cout << "You're pretty young, aren't you?" << std::endl;

    return 0;
}
