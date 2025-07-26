int acceptable_input(char *arg, int clues[16])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		if (arg[1] >= '1' && arg[i] <= '4')
		{
			if (j >= 16)
				return(0);
			clues[j++] = arg[i] - '0';
			i++;
			if (arg[i] != ' ' && arg[i] != '\0')
				return(0);
		}
		else if (arg[i] == ' ')
			i++;
		else
			return (0);
	}
	return (j == 16);
}