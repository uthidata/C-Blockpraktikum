#include <iostream>

using namespace std;

void printNameAndAge(string name,int age)
{
    cout<<"Hello "<<name<<"! ";
    if(age<0) cout<<"You're lying about your age!"<<endl;
    else if(0<age && age< 15) cout<< "You should play outside!"<<endl;
    else cout<<"Nice weather today no?"<<endl;
    
}

int main(){
    string name;
    int age;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter age: "<<endl;
    cin>>age;
    printNameAndAge(name,age);
    return 0;
}