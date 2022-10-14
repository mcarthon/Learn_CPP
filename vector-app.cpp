#include <iostream>
#include <vector> 

using namespace std;

char choice;
vector <long double> vektor {};
long double number;

int main() {
    while (true) {

        cout << "\nP - Print Numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit\n" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 'P' || choice == 'p') {
            if (vektor.size() == 0) {
                cout << "\n[] - the list is empty" << endl;
            }
            else {
                cout << "[ ";
                for (auto num: vektor)
                    cout << num << " ";
                cout << "]" << endl;      
            }
        }
        
        if (choice == 'A' || choice == 'a') {
            cout << "\nEnter a number to add to the list: " << endl;
            cin >> number;

            vektor.push_back(number);
            cout << "\nYou added " << number << " to the list." << endl;
        }

        if (choice == 'M' || choice == 'm') {
            if (vektor.size() == 0) {
                cout << "\nThe list is empty, therefore the mean can not be calculated." << endl;
            }
            else {
                long double sum = 0;
                for (auto num: vektor) {
                    sum += num;
                }
                cout << "\nThe mean is " << sum/vektor.size() << endl;
            }
        }

        if (choice == 'S' || choice == 's') {
            if (vektor.size() == 0) {
                cout << "\nThe list is empty; there is no smallest number." << endl;
            }

            else if (vektor.size() == 1) {
                cout << "\nThe smallest number in the list is: " << vektor[0] << endl;
            }

            else {
                long double smallest = vektor[0];

                for (signed short int i = 1; i < vektor.size(); ++i) {
                    if (vektor[i] < smallest) {
                        smallest = vektor[i];
                    }
                    else
                        continue;
                }
                cout << "\nThe smallest number in the list is: " << smallest << endl;
            }
        }

        if (choice == 'L' || choice == 'l') {
            if (vektor.size() == 0) {
                cout << "\nThe list is empty; there is no largest number." << endl;
            }

            else if (vektor.size() == 1) {
                cout << "\nThe largest number in the list is: " << vektor[0] << endl;
            }

            else {
                long double largest = vektor[0];

                for (signed short int i = 1; i < vektor.size(); ++i) {
                    if (vektor[i] < largest) {
                        largest = vektor[i];
                    }
                    else
                        continue;
                }
                cout << "\nThe largest number in the list is: " << largest << endl;
            }
        }

        if (choice == 'Q' || choice == 'q') {
            cout << "\nYou have exited the app.\n" << endl ;
            break;
        }
    }   
}