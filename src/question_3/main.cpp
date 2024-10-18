#include"question3.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout << "Weolcome to question 3!";
    int num1,num2;
    cout << "Please provide 2 numbers for GCD finder. First must be the smaller number.\nNumber 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    if ((num1 < 200 && num1 > 1) && (num2 < 200 && num2 > 1)){
        int gcd = find_gcd(num1,num2);
        if (gcd == -1){
            cout << "There is no GCD between " << num1 << " and " << num2 << " .";
        }
        else {
            cout << "GCD between " << num1 << " and " << num2 << " is" << gcd << " .";
        }
    } 
    else {
        cout << "This function accepts values only between 1 and 200\n";
        }
    return 0;
}