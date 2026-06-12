#include <iostream>

int main() {
    
    std::cout << "========== FIZZBUZZ ==========\n";

    // Loop exactly 100 times
    for (int i = 1; i <= 100; i++) {
        
        // CRITICAL: You must check for BOTH 3 and 5 first!
        // The modulo operator (%) checks if the remainder of division is 0.
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        } 
        // Then check if it is only divisible by 3
        else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        } 
        // Then check if it is only divisible by 5
        else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        } 
        // If it is none of the above, just print the actual number
        else {
            std::cout << i << "\n";
        }
    }

    return 0;
}