#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(time(NULL)); 

    int playerHealth = 100;
    int dragonHealth = 100;
    int healPotions = 3;
    int choice;

    std::cout << "========== THE DRAGON'S LAIR ==========\n";
    std::cout << "A massive Red Dragon blocks your path!\n";

    // Start the Battle Loop
    do {
        std::cout << "\n--- CURRENT STATS ---\n";
        std::cout << "Player Health: " << playerHealth << " | Potions: " << healPotions << "\n";
        std::cout << "Dragon Health: " << dragonHealth << "\n";

        std::cout << "\nChoose your action:\n";
        std::cout << "1. Attack with Sword\n";
        std::cout << "2. Drink Healing Potion\n";
        std::cout << "3. Try to Run\n";
        std::cout << "Action: ";
        std::cin >> choice;

        // --- PLAYER TURN LOGIC ---
        if (choice == 1) {
            int damage = (std::rand() % 16) + 10;
            dragonHealth -= damage; // Subtracts damage from dragon
            std::cout << "\nYou slash the dragon for " << damage << " damage!\n";
            
        } else if (choice == 2) {
            // Nested if: Check if they actually have potions left!
            if (healPotions > 0) {
                int healAmount = (std::rand() % 16) + 15;
                playerHealth += healAmount;
                healPotions--; // Subtracts 1 potion
                
                // Optional Pro-Tip: Prevent health from going over 100
                if (playerHealth > 100) {
                    playerHealth = 100; 
                }
                std::cout << "\nYou drink a potion and heal for " << healAmount << " HP!\n";
            } else {
                std::cout << "\nYou reach for a potion, but your bag is empty!\n";
            }
            
        } else if (choice == 3) {
            int runChance = std::rand() % 2; // Returns 0 or 1
            if (runChance == 1) {
                std::cout << "\nYou successfully run away! Coward!\n";
                break; // This keyword instantly snaps you out of the do-while loop!
            } else {
                std::cout << "\nYou try to run, but the dragon blocks your path!\n";
            }
            
        } else {
            std::cout << "\nInvalid choice! You trip over your own feet and lose your turn.\n";
        }

        // --- DRAGON TURN LOGIC ---
        // Important: The dragon should only attack if it is still alive!
        if (dragonHealth > 0) {
            int dragonDamage = (std::rand() % 21) + 10;
            playerHealth -= dragonDamage;
            std::cout << "The dragon breathes fire! You take " << dragonDamage << " damage!\n";
        }

    // Loop Condition: Keep going as long as BOTH are still alive
    } while (playerHealth > 0 && dragonHealth > 0);


    // --- GAME OVER LOGIC ---
    std::cout << "\n========== BATTLE OVER ==========\n";
    
    // We check if they successfully ran away first
    if (playerHealth > 0 && dragonHealth > 0) {
        std::cout << "You escaped to live another day...\n";
    } else if (playerHealth <= 0) {
        std::cout << "You have been roasted. The dragon wins.\n";
    } else {
        std::cout << "The dragon collapses. YOU WIN!\n";
    }

    return 0;
}