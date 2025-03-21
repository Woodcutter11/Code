#include<iostream>
using namespace std;

int main()
{
    int D,r,π,A;
    
    cout<< "Enter D:";
    cin >> D;
    r=D/2;
    cout<< "Result of radius is:"<<r;
    cout<<endl;
    cout<< "Enter radius:";
    cin >> r;
    cout<< "Enter the value of π:";
    cin >> π;
    A=π*r*r;
    cout<< "Results of Area using the equation pi*r*r is:"<<A;
    cout<<endl;
    cout<< "Enter Area (A) to find the radius of circle:";
    cin>> A;
    r=A/2;
    cout<< "Result r:"<<r;
   
    }