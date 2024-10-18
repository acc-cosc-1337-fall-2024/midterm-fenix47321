#include"question4.h"

//
bool test_config()
{
    return true;
}

double get_sales_commission(double sales){

    double commission;


    // Switch: case is a bad idea. I've tried

    if (sales >= 1500){
        commission = .08;
    }
    else if (sales >= 1000 && sales < 1500){
        commission = .07;
    }
    else if (sales >= 500 && sales < 1000){
        commission = .06;
    }
    else if (sales >= 0 && sales < 500){
        commission = .05;
    }
    else {commission = 0;}

    return static_cast<int>(sales*commission);

}
