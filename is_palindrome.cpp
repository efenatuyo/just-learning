#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  std::string rvds;

  for (int i = text.length() - 1; i >= 0; i--) {
    rvds += text[i];
  }
  return rvds == text;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
