#include <iostream>

int main() {
    //const variable fixes the value and it cant be changed any further(makes it static from dynamic)
    const double pi = 3.14;
    double radius = 25;
    double circumference = 2 * pi *radius;
   
    std::cout << circumference << '\n';

    return 0;
}