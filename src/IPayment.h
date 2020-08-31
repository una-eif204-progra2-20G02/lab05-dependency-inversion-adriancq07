
//
// Created by Adrian on 30/08/2020.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENT_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENT_H
#include <string>
#include <ostream>

class IPayment{

public:
    IPayment();

    virtual ~IPayment();

    virtual std::string sendPayment()= 0;

};
#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_H
