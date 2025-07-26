int	check_left(int row, int board[4][4]);
int	check_right(int row, int board[4][4]);
int	check_up(int col, int board[4][4]);
int	check_down(int col, int board[4][4]);

int	check_row(int row, int board[4][4], int clues[16])
{
	int	i;
	int	comp;

	i = 0;
	comp = 1;
	while (i < 4)
	{
		if (board[row][i++] == 0)
			comp = 0;
	}
	if (comp)
	{
		if (check_left(row, board) != clues[8 + row])
		{
			return (0);
		}
		if (check_right(row, board) != clues[12 + row])
		{
			return (0);
		}
	}
	return (1);
}

int check_col(int col, int board[4][4], int clues[16])
{
	int i;
	int comp;

	i = 0;
	comp = 1;
	while (i < 4)
	{
		if (board[i++][col] == 0)
			comp = 0;
	}
	if (comp)
	{
		if (check_up(col, board) != clues[col])
			return (0);
		if (check_down(col, board) != clues[col + 4])
			return (0);
	}
	return (1);
}

int	check_clues_current(int row, int col, int board[4][4], int clues[16])
{
	if(!check_row(row, board, clues))
		return (0);
	if (!check_col(col, board, clues))
		return (0);
	return (1);
}