#include"question4.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Welcome to the question 4!";
    char selector;

    do{

        cout << "What are you sales?";
        int sales;
        cin >> sales;
        int commision;
        commision = get_sales_commission(sales);
        cout << "Congrats, after selling for " << sales << "$ you earned " << commision << "$ in commision!";

        cout << "\nRun again?\ny/n.\n";
        cin >> selector;

    }while (selector == 'y');
    return 0;
}