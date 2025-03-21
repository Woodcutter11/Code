#include <iostream>
 using namespace std;

int main() {
int age, salary;

 age=185;
 salary=4000;

cout<<"enter a age:";
cin>>age;

if(age >= 18){
    if (salary > 5000){

        cout<<"You are adult and earn more than $5000."<<endl;
    }else{ 
        cout <<"You are an adult and earn %5000 or less."<<endl;
        }
    }else{
        cout<<"You are a minor."<<endl;
       }
     
return 0;

}
