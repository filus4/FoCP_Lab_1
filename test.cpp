#include <iostream>

int main(){
    
    int my_number;

    std::cout << "Please introduce a number:" << std::endl;

    std::cin >> my_number;

    if (my_number % 2 == 0){
        std::cout << "This number is even" << std::endl;
    } else {
        std:: cout << "This number is odd" << std::endl;
    }

    
    return 0;
}
