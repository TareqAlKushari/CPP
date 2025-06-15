#include <iostream>
#include "AccountBank.h"

using namespace std;

int main()
{
    AccountBank accountBank( 2500 );
    cout << accountBank.displayMessage() << endl;
    cout << "To inquire about your balance, press the number: 'one'\n"
        << "To add to your balance, press the number: 'two'\n"
        << "To withdraw from your balance, press the number: 'three'" << endl;
    int x = 0;
    cin >> x;
    while( x != EOF)
    {


        if ( x == 1)
        {
            cout << "Your balance is: " << accountBank.getBalance() << endl;
        }
        else if ( x == 2)
        {
            int amount = 0;
            cout << "Enter the amount to be added: ";
            cin >> amount;
            cout << endl;
            accountBank.addAmount(amount);

        }
        else if ( x == 3)
        {
            int money = 0;
            cout << "Enter the amount to be withdrwa: ";
            cin >> money;
            accountBank.drawMoney( money );

        }
        else
            cout << "The number you entered is incorrect.\n" << "please try again." << endl;
    }
}
