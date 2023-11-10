#include <iostream>

// Define tenth_power() here:
int tenth_power(int num) {
  int total = num;
  for (int i = 0; i < 9; i++) {
    total *= num;
  }
  return total;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
