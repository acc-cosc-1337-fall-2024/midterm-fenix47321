#include"question1.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char selector;
    cout << "Welcome to the question 1!" << endl;    
    do {
    
        int mass, velocity;
        cout << "Please, how heavy is your object in kilograms?" << endl;
        cin >> mass;
        cout << "Please, how fast is your object in meters per second?" << endl;
        cin >> velocity;
        int answer = get_kinetic_energy(mass, velocity);
        cout << "Energy of your object is: \n" << answer << " joules." << endl;
        cout << "\nRun again?\ny/n.\n";
        
        cin >> selector;
    }while(selector == 'y');
    return 0;
}