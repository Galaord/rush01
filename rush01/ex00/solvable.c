int	is_placeable(int row, int col, int num, int board[4][4]);
int	check_clues(int board[4][4], int clues[16]);
int	check_clues_current(int row, int col, int board[4][4], int clues[16]);

int	solvable(int row, int col, int board[4][4], int clues[16])
{
	int	num;

	if (row == 4)
		return(check_clues(board, clues));
	if (col == 4)
		return(solvable(row + 1, 0, board, clues));
	num = 1;
	while (num <= 4)
	{
		if(is_placeable(row, col, num, board))
		{
			board[row][col] = num;
			if (check_clues_current (row, col, board, clues) && solvable(row, col + 1, board, clues))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}