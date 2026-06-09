#include <iostream>

int main() {
    int year;

    std::cout << "Enter your year: \n";
    std::cin >> year;

    // Check if the year is a four-digit number
    if (year >= 1000 && year < 10000) {
        
        // Leap year logic check
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            std::cout << year << " is a leap year.\n";
        } else {
            std::cout << year << " is not a leap year.\n";
        }
        
    } else {
        std::cout << "Year is not a four-digit number\nTry again!\n";
    }

    return 0;
}