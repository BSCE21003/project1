//
// Created by H.T on 12/17/2021.
//

#ifndef UNTITLED2_FUNCTIONS_H
#define UNTITLED2_FUNCTIONS_H
#include <string>

struct customer {

    std::string name;
    unsigned long long  account_number=0;
    unsigned long long int cash = 0;
};

void createBankAccount(customer);
void readAllData();
//void modify_account(int n);
#endif //UNTITLED2_FUNCTIONS_H
