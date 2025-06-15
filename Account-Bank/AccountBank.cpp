#include <iostream>
#include "AccountBank.h"

using namespace std;

AccountBank::AccountBank( int name )
{
    setBalance( name );
}

void AccountBank::setBalance( int name )
{
    if ( name >= 0 )
        balance = name;
    else
    {
        balance = 0;

        cerr << "The Balance \"" << name << "\" Initial Balance was Invalid.\n" << endl;
    }
}

int AccountBank::getBalance() const
{
    return balance;
}

void AccountBank::addAmount( int amount )
{
    balance = balance + amount;
    cout << "Successfully Added:" << endl;
    cout << "Your balance is: " << getBalance() << endl;

}

void AccountBank::drawMoney( int money )
{
    if ( money <= balance )
    {
        balance = balance - money;
        cout << "The Amount was Withdrawn: " << (money) << " From the Account. " << endl;
        cout << "Your Remaining Balance is: " << getBalance() << endl;
    }
    if ( money > balance )
    {
        cerr << "Debit Amount Exceeded Account Balance. " << "\nThe Current Balance is: " << getBalance() << endl;
    }
}



int AccountBank::displayMessage() const
{
    cout << "******************************\n" << "Welcome to the Account Bank: \n" << "******************************" << endl;
}
