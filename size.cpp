#include <iostream>
#include <climits>

using namespace std;

int main() {

    cout << "\nsizeof Information"                                << endl;
    cout << "======================================="             << endl;

    cout << "char: "         << sizeof(char)         << " bytes." << endl;
    cout << "int: "          << sizeof(int)          << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: "        << sizeof(short)        << " bytes." << endl;
    cout << "long: "         << sizeof(long)         << " bytes." << endl;
    cout << "long long: "    << sizeof(long long)    << " bytes." << endl;

    cout << "======================================="             << endl;

    cout << "float: "        << sizeof(float)        << " bytes." << endl;
    cout << "double: "       << sizeof(double)       << " bytes." << endl;
    cout << "long double: "  << sizeof(long double)  << " bytes." << endl;

    cout << "\nValues defined in <climits> "                      << endl;
    cout << "======================================="             << endl;

    cout << "Minimum values: "                                    << endl;
    cout << "char: "         << CHAR_MIN                          << endl;
    cout << "int: "          << INT_MIN                           << endl;
    cout << "short: "        << SHRT_MIN                          << endl;
    cout << "long: "         << LONG_MIN                          << endl;
    cout << "long long: "    << LLONG_MIN                         << endl;

    cout << "======================================="             << endl;

    cout << "Maximum values: "                                    << endl;
    cout << "char: "         << CHAR_MAX                          << endl;
    cout << "int: "          << INT_MAX                           << endl;
    cout << "short: "        << SHRT_MAX                          << endl;
    cout << "long: "         << LONG_MAX                          << endl;
    cout << "long long: "    << LLONG_MAX                         << endl;

    cout << "\nsizeof Using Variable Names"                       << endl;
    
    signed short int age {21};
    cout << "Age is "        << sizeof age           << " bytes." << endl;

    float wage {22.24};
    cout << "Wage is "       << sizeof wage          << " bytes." << endl;
}