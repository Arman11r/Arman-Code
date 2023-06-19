#include <iostream>
//typedef is used to convert something complicated itno short such as "str::string" converted to "text_t this gives redability to code"
typedef std::string text_t;
typedef int number;
//or
using text_t = std::string;

int main() {

    text_t onichan = "brother";
    number a = 2;

    std::cout << onichan << '\n';
    std::cout << a ;
 
    return 0;
}