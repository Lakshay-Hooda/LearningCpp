#include <iostream>

int main() {
    int hunger = 50;
    int happiness = 50;
    int energy = 50;
    int day = 1;
    int choice;

    std::cout << "========== CYBER-GOTCHI ==========\n";
    std::cout << "Keep your digital pet alive for 10 days!\n";

    // --- THE MAIN GAME LOOP ---
    do {
        std::cout << "\n--- DAY " << day << " ---\n";
        std::cout << "Hunger:    " << hunger << "/100\n";
        std::cout << "Happiness: " << happiness << "/100\n";
        std::cout << "Energy:    " << energy << "/100\n";

        std::cout << "\nWhat would you like to do?\n";
        std::cout << "1. Feed the pet (+Hunger, -Energy)\n";
        std::cout << "2. Play with the pet (+Happiness, -Energy, -Hunger)\n";
        std::cout << "3. Put pet to sleep (+Energy, -Hunger, -Happiness)\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        // --- PLAYER CHOICES & BOUNDARY LOGIC ---
        if (choice == 1) {
            std::cout << "\nYou feed your pet a digital apple.\n";
            hunger += 20;
            energy -= 10;
            
            if (hunger > 100) {
                hunger = 100; // Boundary Check: Max 100
            }
        } 
        else if (choice == 2) {
            std::cout << "\nYou throw a digital frisbee. Your pet loves it!\n";
            happiness += 20;
            energy -= 15;
            hunger -= 10;
            
            if (happiness > 100) {
                happiness = 100; // Boundary Check: Max 100
            }
        } 
        else if (choice == 3) {
            std::cout << "\nYou turn off the lights. Zzzzz...\n";
            energy += 30;
            hunger -= 10;
            happiness -= 10;
            
            if (energy > 100) {
                energy = 100; // Boundary Check: Max 100
            }
        } 
        else {
            std::cout << "\nInvalid choice! Your pet sits there confused.\n";
            happiness -= 10;
        }

        // Time passes...
        day++;

    // --- THE LOOP CONDITION ---
    // Keep running as long as it's day 10 or less AND no stat has hit 0!
    } while (day <= 10 && hunger > 0 && happiness > 0 && energy > 0);


    // --- GAME OVER LOGIC ---
    std::cout << "\n========== GAME OVER ==========\n";
    
    if (day > 10) {
        std::cout << "Congratulations! Your pet survived all 10 days! You win!\n";
    } 
    else if (hunger <= 0) {
        std::cout << "Your pet starved and ran away to find food!\n";
    } 
    else if (happiness <= 0) {
        std::cout << "Your pet became too depressed and left you!\n";
    } 
    else if (energy <= 0) {
        std::cout << "Your pet died of sheer exhaustion!\n";
    }

    return 0;
}