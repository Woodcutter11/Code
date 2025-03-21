#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    char Operator;
    
    cout<<"Enter first number:";
    cin>>num1;
    cout<<endl;
    
    cout<<"Enter second number:";
    cin>>num2;
    cout<<endl;
   
    cout<<"Enter the Operator: \n '+' for addition \n '/' for division \n '*' for multiplication \n '-' for subtraction \n" <<endl;
   
    cout<<"Enter Operator:";
    cin>>Operator;
    cout<<endl;
  
    if (Operator == '+'){
        cout<<"The result is:"<< num1+num2;
    }
    else if (Operator == '/') {
        cout<<"The result is:" << num1/num2;
    }
    else if (Operator == '*' ){
        cout<<"The result is:"<< num1*num2;
    }
    else if (Operator == '-'){
        cout<<"The result is:"<< num1-num2;
    }
    else{
        cout<<"Invalid Operator!!";
    }
    
    return 0;
    
    }   