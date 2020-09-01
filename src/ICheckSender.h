//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_ICHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_ICHECKSENDER_H

#include <string>


class ICheckSender {
public:
    ICheckSender();

    virtual ~ICheckSender();

    virtual std::string processPaymentCheck()= 0;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_ICHECKSENDER_H
