#include <iostream>

void swapInt(int *a,int *b)//swap the values at the places a and b point to
{
    int temp = *a;//copy the value of a to temp
    *a = *b;//copy the value of b to a
    *b = temp;//copy the value of a to temp
}

void swapIntPointer( int **a,int **b)
{
    int *temp = *a;//copy the address of a to temp
    *a=*b;//pointer to a now points to the address of b
    *b=temp;//pointer to b now points to the address of a
    //values at these addresses don't change
}

int main(){
    int a=1;
    int b=10;
    std::cout<<"a = "<<a<<" and b = "<<b<<std::endl;
    swapInt(&a,&b);
    std::cout<<"a = "<<a<<" and b = "<<b<<std::endl;
    int *aptr=&a;
    int *bptr=&b;

    swapIntPointer(&aptr,&bptr);
    std::cout<<"a = "<<*aptr<<" and b = "<<*bptr<<std::endl;
    
}