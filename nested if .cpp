#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) { 
        if (number == 0) { 
            cout << "The number is zero." <<endl;
        } else {
            std::cout << "The number is positive." <<endl;
        }
    } else {
        cout << "The number is negative." << endl;
    }