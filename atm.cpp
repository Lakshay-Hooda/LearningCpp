#include <iostream>

int main() {
    // 1. Declare your balance variable here
    double balance = 1000.0; 
    
    // 2. Build your menu and switch logic below
    std::cout << "Welcome to the ATM Machine!\n";
    int option;
    do {
    std::cout << "Please select an option:\n";
    std::cout << "1. Check Balance\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Exit\n";
    
    std::cin >> option;

    switch (option) {
        case 1: {
            std::cout << "Your current balance is: $" << balance << "\n";
            break;
        }
        case 2: {
            std::cout << "Enter the amount to deposit: ";
            double depositAmount;
            std::cin >> depositAmount;
            balance += depositAmount;
            std::cout << "Deposit successful! Your new balance is: $" << balance << "\n";
            break;
        }
        case 3: {
            std::cout << "Enter the amount to withdraw: ";
            double withdrawAmount;
            std::cin >> withdrawAmount;
            if (withdrawAmount > balance) {
                std::cout << "Insufficient funds! Your current balance is: $" << balance << "\n";
            } else {
                balance -= withdrawAmount;
                std::cout << "Withdrawal successful! Your new balance is: $" << balance << "\n";
            }
            break;
        }
        case 4: {
            std::cout << "Thank you for using the ATM Machine. Goodbye!\n";
            break;
        }
        default:
            std::cout << "Invalid option!\n";
            break;
    }
} while (option != 4);
    return 0;
}