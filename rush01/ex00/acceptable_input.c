int acceptable_input(char *arg, int clues[16])
{
	int i = 0;
	int j = 0;

	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '4')
		{
			if (j >= 16)
				return (0);
			clues[j++] = arg[i] - '0';
			i++;
			if (arg[i] == ' ')
				i++;
			else if (arg[i] != '\0')
				return (0);
		}
		else if (arg[i] == ' ')
		{
			i++;
		}
		else
			return (0);
	}
	return (j == 16);
}