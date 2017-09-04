#include <iostream>
#include "fizzbuzz.hpp"

void fizzbuzz(int biggest)
{
    for(int i=1;i<=biggest;i++){
        int ay=0;
        if(i%3==0){
            std::cout<<"Fizz";
            ay++;
        }
        if(i%5==0){
            std::cout<<"Buzz";
            ay++;
        }
        if(!ay)std::cout<<i;
        std::cout<<std::endl;
    }
}