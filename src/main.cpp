#include "print_func.h"
#include <iostream>


int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 15 == 0){
                      std::cout << "FizzBuzz\n";
        } else if (i % 3 == 0)
        {
            print_string("FIZZ");
            } else if (     i % 5 == 0) {
            std::cout << "Buzz\n";
        } 
        else {
            std::cout << i << "\n";
        }
    }
    std::cout << std::endl;
    return 0;
}