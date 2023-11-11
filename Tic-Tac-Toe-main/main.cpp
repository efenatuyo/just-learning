#include <iostream>
#include "fns.hpp"

int main() {
  std::string fields[9] = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};

  std::string move = "o";
  while (true) {
    std::cout << "Player to move: " << move << "\n";
    print_fields(fields, 9);
    int row;
    int column;
    
    std::cout << "row: ";
    std::cin >> row;

    if (row > 3 || row < 1) {
      std::cout << "Invalid input\n";
      continue;
    }

    std::cout << "\n" << "column: ";
    std::cin >> column;

    if (column > 3 || column < 1) {
      std::cout << "Invalid input\n";
      continue;
    }
    if (!place(fields, move, (row - 1) * 3 + (column - 1))) {
      std::cout << "Invalid input\n";
      continue;
    }

    if (check_winner(fields, move)) {
      break;
    }
    
    if (move == "o") {
      move = "x";
    } else {
      move = "o";
    }
  }
  std::cout << "\n";
}
