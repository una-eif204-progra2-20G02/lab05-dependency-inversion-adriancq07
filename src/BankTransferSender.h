//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H


#include <string>
#include "IPayment.h"

class BankTransferSender: public IPayment  {
public:
    std::string sendPayment() override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
