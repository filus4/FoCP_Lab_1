#include <iostream>
#include <cmath>
#include <array>
#include <cstdlib>

int main() {

/*
    int my_number;

    std::cout << "Please introduce a number:" << std::endl;

    std::cin >> my_number;

    if (my_number % 2 == 0) {
        std::cout << "This number is even" << std::endl;
    } else {
        std:: cout << "This number is odd" << std::endl;
    }
*/

/*  
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
*/

/*
    int times;
    
    std::cout << "Please introduce a number of times you want to repeat the sentence:";

    std::cin >> times;

    for (int i = 0; i < times; i+= 5) {
        std::cout << "I will n OMEGALUL t talk in class" << std::endl; 
    }
*/

/*

    int total_money;
    int banknotes = 0;
    
    std::cout << "Please introduce an amount of money:";

    std::cin >> total_money;

    while (total_money >= 50) {
        total_money = total_money - 50;
        banknotes += 1;
    }

    std::cout << "Number of banknotes: " << banknotes << std::endl;
*/

/*
    for (int i = 0; i <= 360; i++) {
        std::cout << "Angle : " << i << " / sine = " << sin(i) << std::endl;
    }
*/

/*
    std::array <int, 5 > data;

    for (int i = 0; i < 5; i++) {
        data[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << data[i] << std::endl;
    }
*/
    
    std::array <int, 10 > numbers = {1,2,5,6,9,93,60,-21,423,-356};

    int smallest = numbers[0];

    for (int i = 0; i < 10; i++) {
        if (numbers[i] < smallest) {
               smallest = numbers[i];
        }
    }

    std::cout << "The smallest number in the array is: " << smallest << std::endl;
    
    return 0;
}
