#include <iostream>

int main() {

    // integer = (whole number)
    int a = 2;
    int b = 25;
    int c = a+b;

    //double(number including decimal:2.5)
    double d = 2.75;

    //char(single character only)
    char e = 'C';

    //boolean(true or false)
    bool f = true;

    //string(represents a sequence of text)
    std::string g = "Hello ";


    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n';
    
    //little more about std::cout(print)
    std::cout << g << e;
    std::cout << " you are " << a << "years old! ";    // no ''  (single quotes,gives error)
    
    return 0;
}