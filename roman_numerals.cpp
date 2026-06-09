#include <iostream>
#include <string>

int main() {
    int number;
    std::string roman = "";

    std::cout << "Enter a number between 1 and 3999: \n";
    std::cin >> number;

    // 1. Validation Step
    if (number < 1 || number > 3999) {
        std::cout << "Invalid input! Number must be between 1 and 3999.\n";
        return 1; 
    }

    // 2. Extracting Place Values using Division and Modulo
    int thousands = number / 1000;
    int hundreds = (number % 1000) / 100;
    int tens = (number % 100) / 10;
    int ones = number % 10;

    // 3. Logic for Thousands
    for (int i = 0; i < thousands; i++) {
        roman += "M";
    }

    // 4. Logic for Hundreds
    if (hundreds == 9) {
        roman += "CM";
    } else if (hundreds >= 5) {
        roman += "D";
        for (int i = 0; i < (hundreds - 5); i++) {
            roman += "C";
        }
    } else if (hundreds == 4) {
        roman += "CD";
    } else {
        for (int i = 0; i < hundreds; i++) {
            roman += "C";
        }
    }

    // 5. Logic for Tens
    if (tens == 9) {
        roman += "XC";
    } else if (tens >= 5) {
        roman += "L";
        for (int i = 0; i < (tens - 5); i++) {
            roman += "X";
        }
    } else if (tens == 4) {
        roman += "XL";
    } else {
        for (int i = 0; i < tens; i++) {
            roman += "X";
        }
    }

    // 6. Logic for Ones
    if (ones == 9) {
        roman += "IX";
    } else if (ones >= 5) {
        roman += "V";
        for (int i = 0; i < (ones - 5); i++) {
            roman += "I";
        }
    } else if (ones == 4) {
        roman += "IV";
    } else {
        for (int i = 0; i < ones; i++) {
            roman += "I";
        }
    }

    // Output the final accumulated string
    std::cout << "Roman Numeral: " << roman << "\n";

    return 0;
}