#include <vector>
#include <iostream>

using namespace std;

vector <unsigned short int> vector1;
vector <unsigned short int> vector2;

vector <vector <unsigned short int>> vector2d;

int main() {

vector1.push_back(10);
vector1.push_back(20);

cout << vector1.at(0)         << endl;
cout << vector1.at(1)         << endl;
cout << vector1.size()        << endl;

vector2.push_back(100);
vector2.push_back(200);

cout << vector2.at(0)         << endl;
cout << vector2.at(1)         << endl;
cout << vector2.size()        << endl;

vector2d.push_back(vector1);
vector2d.push_back(vector2);

cout << vector2d.at(0).at(0)  << endl;
cout << vector2d.at(0).at(1)  << endl;
cout << vector2d.at(1).at(0)  << endl;
cout << vector2d.at(1).at(1)  << endl;
cout << vector2d.size()       << endl;

cout << (10 == 9.999999999999999) << endl;

} 