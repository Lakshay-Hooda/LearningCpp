#include <iostream>

int main() {
  double earth;
  int planet;
  double mer;
  double ven;
  double mar;
  double jup;
  double sat;
  double ura;
  double nep;

  std::cout << "Enter your Earth weight: \n";
  std::cin >> earth;

  std::cout << "Enter the number for the planet you wants to fight on: \n";
  std::cout << "1. Mercury \n";
  std::cout << "2. Venus \n";
  std::cout << "3. Mars \n";
  std::cout << "4. Jupiter \n";
  std::cout << "5. Saturn \n";
  std::cout << "6. Uranus \n";
  std::cout << "7. Neptune \n";
  std::cin >> planet;
  
  mer = earth * 0.38;
  ven = earth * 0.91;
  mar = earth * 0.38;
  jup = earth * 2.34;
  sat = earth * 1.06;
  ura = earth * 0.92;
  nep = earth * 1.19;
  
  switch (planet) {
    case 1:
    std::cout << "Weight on Mercury: " << mer  << ".\n";
    break;
  
    case 2:
    std::cout << "Weight on Venus: " << ven  << ".\n";
    break;
  
    case 3:
    std::cout << "Weight on Mars: " << mar  << ".\n";
    break;

    case 4:
    std::cout << "Weight on Jupiter: " << jup  << ".\n";
    break;
  
    case 5:
    std::cout << "Weight on Saturn: " << sat  << ".\n";
    break;

    case 6:
    std::cout << "Weight on Uranus: " << ura  << ".\n";
    break;
  
    case 7:
    std::cout << "Weight on Neptune: " << nep  << ".\n";
    break;


    default:
    std::cout << "Invalid input! \n";
    break;

  }
  
  
  
  
  
}