#include <iostream>

int main(){
    
    // ax + b = c
    // ax = c - b
    // x = (c - b) / a

    float a;
    float b;
    float c;
    
    std::cout << "Please introduce a value for a:" << std::endl;

    std::cin >> a;

    std::cout << "Please introduce a value for b:" << std::endl;

    std::cin >> b;

    std::cout << "Please introduce a value for c:" << std::endl;

    std::cin >> c;

    float x = (c - b) / a;

    std::cout << "The value of x is: " << x << std::endl;

/*
    int my_number;

    std::cout << "Please introduce a number:" << std::endl;

    std::cin >> my_number;

    if (my_number % 2 == 0){
        std::cout << "This number is even" << std::endl;
    } else {
        std:: cout << "This number is odd" << std::endl;
    }
*/
    
    return 0;
}
