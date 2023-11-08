#include <iostream>

int main() {
  // Add your code below 
  double weight;
  std::cout << "Enter the weight of your item in kg:\n";
  std::cin >> weight;
  std::cout << "Your item would weight: " <<  (weight / 9.81) * 3.72076 << "kg on mars.\n";

}
