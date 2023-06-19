#include <iostream>

int main(){

    //type conversion = conversion of a value from one datatype to another
    //implicit = automatic
    //explicit = precede value with new data type(int)
    
    //char a = 100;     output = d
    //or
    //std::cout << (char)100;
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";

return 0;    
}