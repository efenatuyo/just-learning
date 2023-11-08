#include <iostream>

int main() {
  double weight;
  int planet;
  std::cout << "Your weigt on earth: ";
  std::cin >> weight;
  std::cout << "Choose your planet:\n1	Mercury\n2	Venus\n3	Mars\n4	Jupiter\n5	Saturn\n6	Uranus\n7	Neptune\nInput: ";
  std::cin >> planet;

  switch (planet) {
    case 1:
      std::cout << "Your weight on Mercury would be: " << weight * 0.38;
      break;
    case 2:
      std::cout << "Your weight on Venus would be: " << weight * 0.91;
      break;
    case 3:
      std::cout << "Your weight on Mars would be: " << weight * 0.38;
      break;
    case 4:
      std::cout << "Your weight on Jupiter would be: " << weight * 2.34;
      break;
    case 5:
      std::cout << "Your weight on Saturn would be: " << weight * 1.06;
      break;
    case 6:
      std::cout << "Your weight on Uranus would be: " << weight * 0.92;
      break;
    case 7:
      std::cout << "Your weight on Neptune would be: " << weight * 1.19;
      break;
    default:
      std::cout << "Invalid planet.";
      break;
  }

}
