#include <iostream>
#include <string>
#include "Functions.cpp"
using namespace std;


    struct customer {

        string name;
        long  account_number;
        unsigned long long int cash = 0;
    };


    int main(){
customer c;
        createBankAccount(c);
        readAllData();
        return 0;
    }

//
