#include <iostream>

using namespace std;

long long amount {0};
long long dollars {0};
long long quarters {0};
long long dimes {0};
long long nickels {0};
long long pennies {0};

int main() {

    cout << "\nEnter an amount in cents: ";
    cin >> amount;

    if (amount > 0) {

        dollars = amount / 100;
        amount -= dollars * 100;

        if (amount > 0) {

            quarters = amount / 25;
            amount -= quarters * 25;

            if (amount > 0) {

                dimes = amount / 10;
                amount -= dimes * 10;

                if (amount > 0) {

                    nickels = amount / 5;
                    amount -= nickels * 5;

                    if (amount > 0) {

                        pennies = amount;

                    }
                }
            }
        } 
    }     

    cout << "\nHere is what you can provide\n";
    cout << "\ndollars: " << dollars  << endl;
    cout << "quarters: "  << quarters << endl;
    cout << "dimes: "     << dimes    << endl;
    cout << "nickels: "   << nickels  << endl;
    cout << "pennies: "   << pennies  << endl;
    cout << "\n";

    return 0;
}