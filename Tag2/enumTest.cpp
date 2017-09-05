#include <iostream>

enum class pay: int {cash,credit,bitcoin=99};

int main(){
    pay mypay;
    mypay = pay::bitcoin;
    if(mypay==pay::bitcoin){
        std::cout<<"ayylmaowtf"<<std::endl;
    }
}