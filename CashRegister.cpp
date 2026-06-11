#include <iostream>

int main() {
    // 1. Declare the variables
    int numberOfItems;
    double subtotal = 0.0;
    double taxRate = 0.08; // 8% tax rate
    double itemPrice;

    std::cout << "========== SELF-CHECKOUT ==========\n";
    std::cout << "How many items are in your cart? ";
    std::cin >> numberOfItems;
    std::cout << "\n";

    // 2. The FOR Loop
    // It starts at 1, keeps going as long as i is less than or equal to the item count, and adds 1 to i each time.
    for (int i = 1; i <= numberOfItems; i++) {
        std::cout << "Enter the price for item #" << i << ": $";
        std::cin >> itemPrice;
        
        // Add the current item's price to our running subtotal
        subtotal += itemPrice; 
    }

    // 3. The Math (Calculated AFTER the loop is totally finished)
    double taxAmount = subtotal * taxRate;
    double grandTotal = subtotal + taxAmount;

    // 4. The Final Receipt
    std::cout << "\n========== RECEIPT ==========\n";
    std::cout << "Subtotal:    $" << subtotal << "\n";
    std::cout << "Tax (8%):    $" << taxAmount << "\n";
    std::cout << "Grand Total: $" << grandTotal << "\n";
    std::cout << "=============================\n";
    std::cout << "Thank you for shopping with us!\n";

    return 0;
}