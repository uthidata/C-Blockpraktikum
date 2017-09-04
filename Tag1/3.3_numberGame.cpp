#include <iostream>
#include <random>
#include <chrono>
#include <limits>

using namespace std;
int getNumber()
{
    //return rand()%numeric_limits<int>::max();
    //not sure if we need the limits at all since rand already limits its result between 0 and max
    return rand()%1000;
}

void playGame(int generatedNumber)
{
    int guess;
    int tries = 0;
    do{        
        cout<<"Guess the number: ";
        cin>>guess;//if input is not a number it will loop indefinitely
        if(guess<generatedNumber) {
            cout<<"Guessed number smaller than generated number."<<endl;
            tries++;
        }
        else if(guess>generatedNumber){
            cout<<"Guessed number larger than generated number."<<endl;
            tries++;
        }
    } while (guess!=generatedNumber);
    cout<<"Congratulations, your guess is right! It took you "<<tries<<" tries!"<<endl;
}

int main(){
    srand(time(0));
    char stillplaying = 'y';
    while(stillplaying == 'y'){
        int generatedNumber = getNumber();
        playGame(generatedNumber);
        cout<<"Play again?(y/whatever): "<<endl;
        cin>>stillplaying;
    }
    return 0;
}