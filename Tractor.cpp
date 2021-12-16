#include "Tractor.h"
#include <iostream>


Tractor::Tractor(string tools, string bazr, float weigth, float power) : AgricultureTools(tools, bazr){
  T.push_back(weigth);
  T.push_back(power);
}



float Tractor::getWeight() const {
    return T[0];
}

void Tractor::setWeight(float weigth) {
    T[0] = weigth;
}

float Tractor::getPower() const {
    return T[1];
}

void Tractor::setPower(float power) {
    if (power > 20)
    {
       T[1] = power;
    }
    else
    {
        throw invalid_argument("it's too low power");
    }
}

void Tractor::print() const
{
    AgricultureTools::print();
    cout << "Power: " << getPower() << "    Weight: " << getWeight() << endl;
}
