#include <iostream>

int main() {
    double income;
    double base_tax = 0.0;
    double final_tax = 0.0;

    std::cout << "Enter your annual income ($): ";
    std::cin >> income;

    // 1. Validation Step
    if (income < 0) {
        std::cout << "Invalid income amount. Try again!\n";
        return 1;
    }

    // 2. Progressive Tax Bracket Logic
    if (income <= 50000) {
        base_tax = income * 0.10;
    } 
    else if (income <= 100000) {
        base_tax = (50000 * 0.10) + ((income - 50000) * 0.20);
    } 
    else {
        base_tax = (50000 * 0.10) + (50000 * 0.20) + ((income - 100000) * 0.30);
    }

    // 3. Exception Rule: Luxury Surcharge
    if (income > 250000) {
        final_tax = base_tax + (base_tax * 0.05);
        std::cout << "\n* Luxury Surcharge Applied (Income > $250,000) *\n";
    } else {
        final_tax = base_tax;
    }

    // 4. Manual Currency Formatting (No Libraries)
    // Convert total dollars to total cents (e.g., 1250.50 -> 125050)
    // Adding 0.5 handles proper rounding before discarding the remaining decimals
    long total_cents = (final_tax * 100.0) + 0.5;
    
    long dollars = total_cents / 100;
    int cents = total_cents % 100;

    // Output the results cleanly
    std::cout << "Final Tax Owed: $" << dollars << ".";
    
    // If cents are less than 10 (e.g. 5 cents), we need to manually print the leading zero
    if (cents < 10) {
        std::cout << "0";
    }
    std::cout << cents << "\n";

    return 0;
}