#include <iostream>
#include <iomanip>

using namespace std;

void calculateCharges(float hour_1, float hour_2, float hour_3)
{
    float n[3] = {hour_1, hour_2, hour_3};
    cout << "Car" << setw(10) << "Hours" << setw(12) << "Charges" <<endl;

    cout << fixed << setprecision(2);

    float h, c_1, c_2;
    for(size_t i=0; i < 3; i++)
    {
        if(n[i] <= 3)
        {
            cout << i+1 << setw(12) << n[i] << setw(12) << 2.00 <<endl;
            c_2 = c_2 + 2.00;
        }
        else if (n[i] >= 3 && n[i] < 24)
        {
            c_1 = 2.00 + ((n[i] - 3.00 ) * 0.50);
            cout << i+1 << setw(12) << n[i] << setw(12) << c_1 <<endl;
            c_2 = c_2 + c_1;
        }
        else
        {
            cout << i+1 << setw(12) << n[i] << setw(12) << 10.00 <<endl;
            c_2 = c_2 + 10.00;
        }
        h = h + n[i];
    }

    cout << "TOTAL" << setw(8) << h << setw(12) << c_2 << endl;

}

int main()
{
    float customer_1, customer_2, customer_3;
    cin>>customer_1>>customer_2>>customer_3;
    cout <<endl;

    calculateCharges(customer_1, customer_2, customer_3);

}