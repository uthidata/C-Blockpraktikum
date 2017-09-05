#include <iostream>

void swapInt(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

void displayNumber(int a, int b){
    std::cout<<"First number: "<<a<<std::endl;
    std::cout<<"Second number: "<<b<<std::endl;
}
int main(){
    int a = 23;
    int b = 42;
    displayNumber(a,b);
    swapInt(a,b);
    displayNumber(a,b);
}