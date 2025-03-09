//
// Created by Ilmyrat Nuryyev on 9.03.2025.
//

#include <iostream>

int main() {

    double celsius;


    std::cout << "Enter a degree in Celsius: ";
    std::cin >> celsius;


    double fahrenheit = (9.0 / 5) * celsius + 32;


    std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}
