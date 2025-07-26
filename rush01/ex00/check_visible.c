int check_left(int row, int board[4][4])
{
	int limit;
	int count;
	int i;
	int value;

	limit = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		value = board[row][i];
		if (value > limit)
		{
			limit = value;
			count++;
		}
		i++;
	}
	return (count);
}

int check_right(int row, int board[4][4])
{
	int limit;
	int count;
	int i;
	int value;

	limit = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		value = board[row][i];
		if (value > limit)
		{
			limit = value;
			count++;
		}
		i--;
	}
	return (count);
}

int check_up(int col, int board[4][4])
{
	int limit;
	int count;
	int i;
	int value;

	limit = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		value = board[i][col];
		if (value > limit)
		{
			limit = value;
			count++;
		}
		i++;
	}
	return (count);
}

int check_down(int col, int board[4][4])
{
	int limit;
	int count;
	int i;
	int value;

	limit = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		value = board[i][col];
		if (value > limit)
		{
			limit = value;
			count++;
		}
		i--;
	}
	return (count);
}