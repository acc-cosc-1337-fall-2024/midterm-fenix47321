#include "question1.h"
#include <cmath>


bool test_config()
{
    return true;
}

// KE = ½ mv^2(v squared)

// Formula variables:

// KE = kinetic energy in joules
// m = object’s mass in kilograms
// v = object’s velocity in meters per second

double get_kinetic_energy(int mass, int velocity){

    int kinetic_energy = (pow(velocity,2) * mass) / 2;
    return kinetic_energy;
}