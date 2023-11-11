#include "fns.hpp"
#include <iostream>

int wins[8][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},
    {2, 4, 6}
  };

void print_fields(std::string *fields, int N) {
  int row = 0;
  std::cout << "  1 2 3";
  for (int i = 0; i < N; i++) {
    if ((i) % 3 == 0) {
      std::cout << "\n";
      row += 1;
      std::cout << row << " ";
    }
    std::cout << fields[i] << " ";
  }
  std::cout << "\n";
}

bool check_winner(std::string *fields, std::string move) {
  for (int i = 0; i < 8; i++) {
    if (fields[wins[i][0]] == move && fields[wins[i][1]] == move && fields[wins[i][2]] == move) {
      std::cout << "Winner: " << move << "\nWinning fields " << wins[i][0] << " " << wins[i][1] << " " << wins[i][2];
      return true;
    }
  }
  return false;
}

bool place(std::string *fields, std::string move, int place) {
  if (fields[place] != "-") {
    return false;
  }
  fields[place] = move;
  return true;
}
