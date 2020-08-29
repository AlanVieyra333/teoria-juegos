#include "go.hpp"

#include <stdlib.h>
#include <string.h>

Go_board::Go_board() { this->clean(); }

int8_t* Go_board::get_board() { return this->board; }

void Go_board::clean() {
  memset(this->board, EMPTY_STONE, BOARD_SIZE * BOARD_SIZE);
  this->cells_occupied = 0;
}

int Go_board::put_stone(size_t position, Stone stone_color) {
  if (this->board[position] == EMPTY_STONE) {
    this->board[position] = stone_color;
    return 0;
  }

  return -1;
}

bool Go_board::is_cell_empty(size_t position) {
  return this->board[position] == EMPTY_STONE;
}

bool Go_board::is_full_board() {
  return this->cells_occupied == BOARD_SIZE * BOARD_SIZE;
}
