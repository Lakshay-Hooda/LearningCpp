#include <iostream>

int main() {
    int choice = 0;
    int attempts = 0;

    std::cout << "========== ESCAPE THE HAUNTED MANOR ==========\n\n";

    // --- LOOP 1: Input Validation ---
    // This loop traps the player until they type '2'.
    // If they type '1' or anything else, it loops right back to the start.
    while (choice != 2) {
        std::cout << "You wake up in a locked, dark room. What do you do?\n";
        std::cout << "1. Sit in the corner and cry.\n";
        std::cout << "2. Kick the wooden door down.\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\nYou cry for an hour. Nothing happens. Try again.\n\n";
        } else if (choice != 2) {
            std::cout << "\nInvalid choice. The ghosts are watching you. Try again.\n\n";
        }
    }

    std::cout << "\n*CRASH!* You kick the door open and step into a long hallway.\n\n";

    // --- LOOP 2: The Main Game State ---
    bool escaped = false;
    
    // The loop continues as long as they haven't escaped AND they have tried less than 3 times
    while (!escaped && attempts < 3) {
        std::cout << "There are three doors in front of you. Which do you open?\n";
        std::cout << "1. The Red Door (Smells like smoke)\n";
        std::cout << "2. The Blue Door (Has a cold breeze coming under it)\n";
        std::cout << "3. The Green Door (You hear growling)\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\nA burst of fire burns your eyebrows off! You slam the door shut.\n";
            attempts++;
        } 
        else if (choice == 2) {
            std::cout << "\nYou step out into the cold winter night. You found the exit!\n";
            escaped = true; // This instantly makes the while loop condition false!
        } 
        else if (choice == 3) {
            std::cout << "\nA zombie lunges at you! You punch it and slam the door.\n";
            attempts++;
        } 
        else {
            std::cout << "\nYou just stare at the wall. The manor groans around you.\n";
            attempts++;
        }

        // Show remaining attempts if they haven't escaped yet
        if (!escaped) {
            std::cout << "Attempts remaining: " << (3 - attempts) << "\n\n";
        }
    }

    // --- GAME OVER LOGIC ---
    std::cout << "==============================================\n";
    if (escaped) {
        std::cout << "CONGRATULATIONS! You survived the Haunted Manor!\n";
    } else {
        std::cout << "GAME OVER! You took too long and the ghosts caught you.\n";
    }

    return 0;
}