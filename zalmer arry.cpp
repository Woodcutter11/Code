#include <iostream>
using namespace std;

int main(){
    int scores[] = {80, 70, 90, 60, 85};
    int size = sizeof(scores) / sizeof(scores[0]);

    cout << "Scores:";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout<< endl;

    int sum = 0;
    for (int i = 0; i < size; i++ ) {
        sum += scores[i];
    }

    cout << "Sum:"<< sum <<endl;
    
    double average = (double)sum / size;

    cout << "Average: " << average << endl;

return 0;
}