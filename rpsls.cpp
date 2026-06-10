#include <iostream>

int main() {
    // Replaced the <string> library with basic character arrays
    const char* choices[] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};

    std::cout << "1) Rock\n2) Paper\n3) Scissors\n4) Lizard\n5) Spock\n";
    std::cout << "Choose your weapon (1-5): ";
    
    int userChoice;
    std::cin >> userChoice;

    if (userChoice < 1 || userChoice > 5) {
        std::cout << "Invalid choice. Game over.\n";
        return 1;
    }
    
    int user = userChoice - 1;

    // Because we removed the random libraries (<cstdlib> and <ctime>), 
    // the computer cannot pick a random number on its own.
    // We will ask you for a "seed" number to scramble a math formula instead.
    std::cout << "Type any random number to spin the computer's wheel: ";
    int seed;
    std::cin >> seed;

    // A basic mathematical scramble to force a result between 0 and 4
    int computer = (seed * 73 + 15) % 5;

    std::cout << "\nYou chose: " << choices[user] << "\n";
    std::cout << "Computer chose: " << choices[computer] << "\n\n";

    // The core winning logic (unchanged)
    if (user == computer) {
        std::cout << "Result: It's a tie!\n";
    } else if (
        (user == 0 && (computer == 2 || computer == 3)) || 
        (user == 1 && (computer == 0 || computer == 4)) || 
        (user == 2 && (computer == 1 || computer == 3)) || 
        (user == 3 && (computer == 1 || computer == 4)) || 
        (user == 4 && (computer == 0 || computer == 2))    
    ) {
        std::cout << "Result: You win!\n";
    } else {
        std::cout << "Result: Computer wins!\n";
    }

    return 0;
}