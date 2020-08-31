//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include <string>
#include "IPayment.h"

class CashSender: public IPayment{
public:
    std::string sendPayment() override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
