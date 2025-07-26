int	check_left(int row, int board[4][4]);
int	check_right(int row, int board[4][4]);
int	check_up(int col, int board[4][4]);
int	check_down(int col, int board[4][4]);

int	check_clues(int board[4][4], int clues[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (check_up(i, board) != clues[i])
			return (0);
		if (check_down(i, board) != clues[i + 4])
			return (0);
		if (check_left(i, board) != clues[i + 8])
			return (0);
		if (check_right(i, board) != clues[i + 12])
			return (0);
		i++;
	}
	return (1);
}