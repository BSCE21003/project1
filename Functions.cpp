//
// Created by H.T on 12/17/2021.
//

#include "Functions.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

// ************************* Functions window ************************* //

void createBankAccount() {
    customer c;
    ofstream writeFile;
    writeFile.open("Bank Data.txt", ios :: app);
    if (!writeFile) {
        cout << "File is not Open\n";
    }
    else {

        cout << "Enter Customer Name: ";
        getline(cin, c.name);

        cout << "Enter Customer Account Number: ";
        cin >> c.account_number;

        cout << "Enter Customer Cash: ";
        cin >> c.cash;


        writeFile << endl;
        writeFile << left << setw(20) << c.account_number << "\t";
        writeFile << left << setw(25) << c.name << "\t";
        writeFile << left << setw(16) << c.cash << "\t";

        cout << "\nData write to a File\n";

    }
    writeFile.close();
}

void readAllData() {

    cout << left << setw(20) << "ACCOUNT NUMBER" << "\t";
    cout << left << setw(25) << "NAME" << "\t";
    cout << left << setw(16) << "CASH" << "\t";
    cout << endl;

    ifstream readFile;
    readFile.open("Bank Data.txt");
    if (!readFile) {
        cout << "File not opened\n";
    } else {
        string data;
        while (!readFile.eof()) {
            getline(readFile, data);
            cout << data << endl;
        }
    }
    readFile.close();
}
void modify_account(int n){
    bool recFound = false;
    account ac;
    fstream File;
    File.open("account.dat", ios::binarty | ios::in | ios::out);
    if(!File){
        cout<< " File could not be opened.\n\n Press any key...";
        return;
    }
    while(!File.eof()&& found ==false){
        File.read(reinterpret_cast)
    }
}