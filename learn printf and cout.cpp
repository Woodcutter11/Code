#include <iostream>
#include <stdio.h>

int main() {
    int number = 42;
    char name[] = "Alice";

    
    printf("Hello, %s! Your lucky number is %d.\n",name , number);


    std::cout << "Hello, " << name << "! Your lucky number is " << number << std::endl;

    return 0;
}
