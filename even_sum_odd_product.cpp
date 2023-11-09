#include <iostream>
#include <vector>

int main() {
  std::vector<int> mixed = {2, 4, 3, 6, 1, 9};

  int even = 0;

  std::vector<int> odds;
  double odd = 0;

  for (int i = 0; i < mixed.size(); i++) {
    int number = mixed[i];
    if (number % 2 == 0) {
      even = even + number;
    } else {
      odds.push_back(number);
    }
  }

  for (int i = 0; i < odds.size(); i++) {
    int number = odds[i];
    if (i == 0) {
      odd = number + odd;
    } else {
      odd = (number * odds[i - 1]) + odd;
    }
  }

  std::cout << "Sum of even numbers is " << even << "\nProduct of odd numbers is " << odd;
  return 0;
}
