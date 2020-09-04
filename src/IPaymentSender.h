//
// Created by PC on 03/09/2020.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H

#include <string>

class IPaymentSender {
public:
    virtual std::string sendPayment() const = 0;
    virtual ~IPaymentSender();

};

#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H
