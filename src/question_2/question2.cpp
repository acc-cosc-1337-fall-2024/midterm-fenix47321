#include "question2.h"
#include <vector>



bool test_config()
{
    return true;
}

using std::vector;

// Check if number is prime in the first place

bool is_prime(int number){
    {
        if (number <= 1){
            return false;
        }
        for(int i = 2; i < number; i ++){
            if(number % i == 0){
                return false;
            }
        }
        return true;
    }
}

// Primes finder

// void get_primes(int number){
//     for(int i = 2; i <= number; i ++){
//         if(is_prime(i)){
//             return i;
//             }
//         else {continue;}
//     return ;
//     }
// }
