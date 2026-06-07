#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    // Seed the random number generator
    srand(time(NULL)); 

    std::string question;
    std::cout << "Ask the Magic 8-Ball a Yes/No question: \n";
    std::getline(std::cin, question); 

    // Generate a random number from 0 to 7
    int magicNumber = std::rand() % 8; 

    std::cout << "\nThe Magic 8-Ball says: \n";

    // A switch statement is perfect for checking exactly 8 possible numbers!
    switch(magicNumber) {
        case 0:
            std::cout << "It is certain.\n";
            break;
        case 1:
            std::cout << "Without a doubt.\n";
            break;
        case 2:
            std::cout << "Yes, definitely.\n";
            break;
        case 3:
            std::cout << "Reply hazy, try again.\n";
            break;
        case 4:
            std::cout << "Ask again later.\n";
            break;
        case 5:
            std::cout << "Don't count on it.\n";
            break;
        case 6:
            std::cout << "My reply is no.\n";
            break;
        case 7:
            std::cout << "Very doubtful.\n";
            break;
        default:
            std::cout << "The 8-Ball is broken!\n";
            break;
    }

    return 0;
}