#include <iostream>
using namespace std;


int main() {

    // variables
    int usersPIN = 1234;
    int pin;
    int errorCounter = 0;

    do {
        cout << "PIN: ";
        cin >> pin;
        if(pin !=usersPIN){
            errorCounter++;
        }
    }while(errorCounter<3 && pin!=usersPIN);

    if(errorCounter<3)
        cout << "PIN CORRECT: loading application...";
    else
        cout << "Blocked...";

    return 0;
}
