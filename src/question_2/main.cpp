# include "question2.h"
#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    cout << "Welcome to questions 2!\n";
    cout << "Input your prime number:\n";
    int user_value;
    cin >> user_value;
    vector<int> primes;
    
    // Passing vector requires to many functions, so it's better just to place it here.
    for (int i = 2; i <= user_value; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    // And unwrap.
    cout << "Prime numbers up to " << user_value << " are:\n";
    for (int prime : primes) {
        cout << prime << " ";
    } 
    cout << endl;

    return 0;
}