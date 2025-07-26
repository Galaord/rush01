#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_board(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(board[i][j])
			if (j < 3)
			{
				ft_putchar (' ');
			}
			j++;
		}
		ft_putchar ('\n');
		i++;
	}
}

void	*ft_resetboard(void *ptr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}

int	main(int argc, char **agrv)
{
	int board[4][4];
	int clues[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_resetboard(board, sizeof(int)*4*4);
	if (!solvable(0, 0, board, clues))
		write(1, "Error\n", 6);
	else
		print_board(board);
	return (0);
}
