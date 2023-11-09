#include <iostream>
#include <string>

int main() {
  std::string year;

  std::cout << "Enter your year: ";
  std::cin >> year;

  if (year.length() == 4) {
    int yearInt = std::stoi(year);
    if (yearInt % 4 == 0 && (yearInt % 100 != 0 || yearInt % 400 == 0)) {
      std::cout << "You have a leap year";
    } else {
      std::cout << "You dont have a leap year.";
    }
  } else {
    std::cout << "Invalid length.";
  }
}
