#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "go.hpp"

size_t get_new_position(Go_board go_board) {
  size_t position;

  do {
    position = (rand() % ((BOARD_SIZE * BOARD_SIZE) + 1));

    if (go_board.is_cell_empty(position)) {
      break;
    }
  } while (true);

  return position;
}

void put_stone(Go_board go_board, Turn turn) {
  size_t position = 0;

  if (turn == BLACK_TURN) {
    position = get_new_position(go_board);
    go_board.put_stone(position, BLACK_STONE);
  } else {
    position = get_new_position(go_board);
    go_board.put_stone(position, WHITE_STONE);
  }
}

void change_turn(Turn &turn) {
  if (turn == BLACK_TURN)
    turn = WHITE_TURN;
  else
    turn = BLACK_TURN;
}

void start_play(Go_board go_board) {
  Turn turn = BLACK_TURN;

  while (!go_board.is_full_board()) {
    put_stone(go_board, turn);

    change_turn(turn);
  }
}

int main(int argc, char const *argv[]) {
  Go_board go_board;

  srand(time(0));
  start_play(go_board);

  printf("is_full_board: %s\n", go_board.is_full_board() ? "SI" : "NO");

  return 0;
}