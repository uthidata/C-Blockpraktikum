//g++ -std=c++14 -o enum.exe ./enum.cpp
#include <iostream>

namespace SC{
    enum ShirtColor {YELLOW,RED,BLACK,WHITE};
}

namespace FL{
    enum FlowerColor{ROSE_RED,LILAC,SUN_YELLOW,WHITE};
}

enum class ShirtColorEC: int {YELLOW,RED,BLACK,WHITE};
enum class FlowerColorEC: int {ROSE_RED,LILAC,SUN_YELLOW,WHITE};

int main(){
    using namespace SC;
    ShirtColor shirtColor = RED;
    switch (shirtColor)
    {
        case YELLOW : std::cout<<"Shirt is yellow."<<std::endl; break;
        case RED    : std::cout<<"Shirt is red."<<std::endl;    break;
        case BLACK  : std::cout<<"Shirt is black."<<std::endl;  break;
        case WHITE  : std::cout<<"Shirt is white."<<std::endl;  break;
    }

    ShirtColorEC scec;
    scec = ShirtColorEC::RED;
    switch (static_cast<int>(scec))
    {
        case static_cast<int>(ShirtColorEC::YELLOW) : std::cout<<"Shirtclass is yellow."<<std::endl; break;
        case static_cast<int>(ShirtColorEC::RED)    : std::cout<<"Shirtclass is red."<<std::endl;    break;
        case static_cast<int>(ShirtColorEC::BLACK)  : std::cout<<"Shirtclass is black."<<std::endl;  break;
        case static_cast<int>(ShirtColorEC::WHITE)  : std::cout<<"Shirtclass is white."<<std::endl;  break;
    }
}