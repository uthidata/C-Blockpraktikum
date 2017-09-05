#include <iostream>

int main(){
    for (int i=0;i<10;i++){
        static int num=0;
        num=num+i;
        std::cout<<num<<std::endl;
    }
}