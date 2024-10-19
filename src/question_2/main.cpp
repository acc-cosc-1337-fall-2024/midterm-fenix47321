# include "question2.h"
#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    char selector;
    cout << "Welcome to questions 2!\n";
    do {

        cout << "Input your prime number:\n";
        int user_value;
        cin >> user_value;
        
        if (user_value >= 1 && user_value <= 60){
            vector<int> primes = get_primes(user_value);
            // And unwrap.
            cout << "Prime numbers up to " << user_value << " are:\n";
            for (int prime : primes) {
                cout << prime << " ";
            }
        }
        else {cout << "Please be sure to provide values between 1 and 60";} 
        cout << "\nRun again?\ny/n.\n";
        cin >> selector;

    }while(selector == 'y');

    return 0;
}