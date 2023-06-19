#include <iostream>
int main(){

    //cout << (insertion)
    //cin >> (extration,user input)

    int age;
    std::string name;

    std::cout << "whats your name? : ";
    std::getline(std::cin >> std::ws, name);      //get line to print string with spaces        // std::ws bcz if we give simple input first then
                                                                                                //getline input it shows error
    std::cout <<"whats your age ? : ";
    std::cin >> age; 
    std::cout << "Hi " << name << " u are " << age << " years old! " ;

return 0;
}