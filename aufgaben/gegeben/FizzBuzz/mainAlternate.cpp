#include <iostream>
#include "fizzbuzz.hpp"

int main(){
    int biggest;
    std::cout<<"Enter an integer: ";
    std::cin>>biggest;
    fizzbuzz(biggest);
    return 0;
}