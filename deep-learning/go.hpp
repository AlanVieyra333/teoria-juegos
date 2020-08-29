#include <stddef.h>
#include <stdint.h>

#define BOARD_SIZE 19

enum Stone { WHITE_STONE = 1, BLACK_STONE = -1, EMPTY_STONE = 0 };
enum Turn { WHITE_TURN, BLACK_TURN };

class Go_board {
 public:
  Go_board();
  int8_t* get_board();
  void clean();
  int put_stone(size_t position, Stone stone_color);
  bool is_cell_empty(size_t position);
  bool is_full_board();

 private:
  int8_t board[BOARD_SIZE * BOARD_SIZE];
  size_t cells_occupied;
};