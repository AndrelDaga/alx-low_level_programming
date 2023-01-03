#include "main.h"
#include <stdio.h>

int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	};
	print_chessboard(board);
	return (0);
}
