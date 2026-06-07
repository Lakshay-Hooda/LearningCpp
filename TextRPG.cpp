#include <iostream>

int main() {
    int item;
    int path;

    std::cout << "--- THE QUEST ---\n";
    std::cout << "Before you leave, choose an item to take with you:\n";
    std::cout << "1) A sharp sword\n";
    std::cout << "2) A magic wand\n";
    std::cout << "3) A shiny rock\n";
    std::cout << "Choice: ";
    std::cin >> item;

    std::cout << "\nYou arrive at a fork in the road.\n";
    std::cout << "1) Enter the Dark Forest\n";
    std::cout << "2) Go towards the Abandoned Castle\n";
    std::cout << "Choice: ";
    std::cin >> path;

    std::cout << "\n";

    // Path 1: The Dark Forest
    if (path == 1) {
        std::cout << "You step into the Dark Forest. A giant wolf attacks!\n";
        
        // Nested Logic: Check inventory using the OR (||) operator
        if (item == 1 || item == 2) {
            std::cout << "You use your weapon to defeat the wolf. You survive!\n";
        } else {
            std::cout << "You throw the shiny rock at the wolf. It gets angry. You died.\n";
        }
    } 
    // Path 2: The Abandoned Castle
    else if (path == 2) {
        std::cout << "You approach the Castle. The heavy iron door is magically locked.\n";
        
        // Nested Logic: You MUST have the wand (item 2)
        if (item == 2) {
            std::cout << "You wave the magic wand. The door clicks open. You win!\n";
        } else {
            std::cout << "You try to force the door open, but it won't budge. You are stuck forever.\n";
        }
    } 
    // Invalid Path
    else {
        std::cout << "You wandered off the path and got lost.\n";
    }

    return 0;
}