int is_placeable (int row, int col, int num, int board[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}