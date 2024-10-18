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
    
    // Passing vector requires to many functions, so it's better just to place it here.
    vector<int> primes = get_primes(user_value);
    // And unwrap.
    cout << "Prime numbers up to " << user_value << " are:\n";
    for (int prime : primes) {
        cout << prime << " ";
    } 
    cout << endl;

    return 0;
}