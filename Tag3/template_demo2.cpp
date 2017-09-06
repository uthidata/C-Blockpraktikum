#include <iostream>
#include "template_demo2.hpp"

int main(){
    std::cout<<doubleUp(4)<<std::endl;
    std::cout<<doubleUp(3.3)<<std::endl;
    std::cout<<static_cast<int>(doubleUp(static_cast <int8_t >(63)))<<std::endl;
}