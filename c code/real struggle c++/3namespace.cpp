#include <iostream>
//namespace for preventing name conflicts specially for bigger projects(kinds like 'def' from python)
namespace first {
    
    int x = 1;

}

namespace second {
    
    int x = 5;

}


int main() {
    using namespace first;

    std::cout << x ;

    return 0;
}