#include <iostream>
using namespace std;
int main(){
    int Days;
    
    cout <<"Enter days 1-7."<<endl;
    cin>> Days;
    

    switch (Days) {
    case 1:
    cout << "Today is Sunday.\n";
    break;
    case 2:
    cout << "Today is Monday.\n";
    break;
    case 3:
    cout << "Today is Tuesday.\n";
    break;
    case 4:
    cout << "Today is Wednesday.\n";
    break;
    case 5:
    cout << "Today is Thursday.\n";
    break;
    case 6:
    cout << "Today is Friday.\n";
    break;
    case 7:
    cout << "Today is saturday.\n";
    break;
    default:
    cout <<"invalid day.\n";
    break;
} 
return 0;
}