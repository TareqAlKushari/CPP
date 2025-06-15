#include <string>
using namespace std;

class AccountBank
{
public:
    explicit AccountBank( int );
    void setBalance( int );
    void addAmount( int );
    void drawMoney( int );
    int getBalance() const;
    int displayMessage() const;
private:
    int balance;
};
