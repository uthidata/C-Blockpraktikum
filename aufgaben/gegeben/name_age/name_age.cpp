#include "name_age.hpp"
#include <iostream>

std::string readName() {
    std::string name;
    std::cin >> name;
    return name;
}

uint8_t readAge() {
    int32_t age;
    std::cin >> age;
    return static_cast<uint8_t>(age);
}
