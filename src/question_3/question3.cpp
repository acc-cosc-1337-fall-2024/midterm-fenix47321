#include "question3.h"

bool test_config()
{
    return true;
}

int find_gcd(int num1, int num2){
    for(int i = num1; i > 1; i--){
        if (num1 % i == 0 && num2 % i == 0){
            return i;
        }
    }
    return -1;
}