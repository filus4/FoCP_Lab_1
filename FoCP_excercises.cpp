#include <iostream>
#include <cmath>

int main() {
/*
    float a1;
    float b1;
    float c1;

    float a2;
    float b2;
    float c2;

    std::cout << "Please introduce a value for a1: ";
    std::cin >> a1;

    std::cout << "Please introduce a value for b1: ";
    std::cin >> b1;

    std::cout << "Please introduce a value for c1: ";
    std::cin >> c1;


    std::cout << "Please introduce a value for a2: ";
    std::cin >> a2;

    std::cout << "Please introduce a value for b2: ";
    std::cin >> b2;

    std::cout << "Please introduce a value for c2: ";
    std::cin >> c2;

    float y = (c2 - a2 * ((c1 - b1) / a1)) / b2;

    float x = (c1 - (b1 * y)) / a1;

    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;
*/
    float a;
    float b;
    float c;

    float x;
    float delta;
    float x1;
    float x2;
    float x0;

    std::cout << "Please introduce a value for a1: ";
    std::cin >> a;

    std::cout << "Please introduce a value for b1: ";
    std::cin >> b;

    std::cout << "Please introduce a value for c1: ";
    std::cin >> c;

    if (a == 0) {
        x = (c - b) / a;
        std::cout << "X = " << x << std::endl;
    } else {
        delta = pow(b, 2) - 4*(a*c);
        x1 = ((-b) - sqrt(delta)) / (2 * a);
        x2 = ((-b) + sqrt(delta)) / (2 * a);
        x0 = (-b) / (2 * a);

        if ( delta > 0) {
            std::cout << "X1 = " << x1 << std::endl;
            std::cout << "X2 = " << x2 << std::endl;

        } else if ( delta == 0 ) {
            std::cout << "X0 = " << x0 << std::endl;
        } else if ( delta < 0) {
            std::cout << "Can't process this equation any further." << std::endl;
        }
    }

    

    return 0;
}