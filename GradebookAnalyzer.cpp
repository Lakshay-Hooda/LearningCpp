#include <iostream>

int main() {
    double currentGrade;
    double totalSum = 0;
    int studentCount = 0;
    
    // Start highest at 0 so the first grade easily beats it
    double highestGrade = 0; 
    // Start lowest at 100 so the first grade easily beats it
    double lowestGrade = 100; 

    std::cout << "========== GRADEBOOK ANALYZER ==========\n";
    std::cout << "Enter student grades (0-100).\n";
    std::cout << "Type -1 when you are finished.\n\n";

    // 1. The Infinite Loop
    while (true) {
        std::cout << "Enter a grade: ";
        std::cin >> currentGrade;

        // 2. The Sentinel Value
        if (currentGrade == -1) {
            std::cout << "Calculating results...\n";
            break; // This shatters the while(true) loop instantly
        }

        // PRO-TIP: Data Validation
        // If the teacher types 150 by mistake, we don't want to ruin our average!
        if (currentGrade < 0 || currentGrade > 100) {
            std::cout << "Invalid grade! Please enter a number between 0 and 100.\n";
            continue; // 'continue' skips the rest of the loop and starts back at the top
        }

        // 3. Process the valid data
        totalSum += currentGrade;
        studentCount++;

        // 4. Min/Max Logic
        if (currentGrade > highestGrade) {
            highestGrade = currentGrade;
        }
        
        if (currentGrade < lowestGrade) {
            lowestGrade = currentGrade;
        }
    }

    std::cout << "\n========== FINAL REPORT ==========\n";

    // 5. Zero-Division Protection
    // We must check if they actually entered grades. Dividing by 0 crashes computers!
    if (studentCount > 0) {
        double average = totalSum / studentCount;
        
        std::cout << "Total Students: " << studentCount << "\n";
        std::cout << "Class Average:  " << average << "\n";
        std::cout << "Highest Grade:  " << highestGrade << "\n";
        std::cout << "Lowest Grade:   " << lowestGrade << "\n";
    } else {
        std::cout << "No valid grades were entered.\n";
    }

    return 0;
}