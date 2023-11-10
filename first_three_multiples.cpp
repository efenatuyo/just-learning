#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  std::vector<int> numbers;
  for (int i = 0; i < 3; i++) {
    numbers.push_back(num * (i + 1));
  }
  return numbers;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
