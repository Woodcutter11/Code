#include <iostream>
using namespace std;
int main(){ 
    int age;

    cout << "Enter your age: ";

    cin >> age;

if (age < 18) {

    cout << "You are a minor." << std::endl;

    } else if (age >= 18 && age <= 59) {

    cout << "You are an adult." << std::endl;

    } else if (age >= 60) {
    cout << "You are a senior." << std::endl;

}

return 0;
}