#include <unistd.h>

void	ft_putchar(char c)
{
		write (1, &c, 1);
}

void	ft_putstr(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
				ft_putchar(str[i]);
				i++;
		}
}

void	ulstr(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
						str[i] = str[i] - 32;
				}
				else if (str[i] >= 'A' && str[i] <= 'Z')
				{
						str[i] = str[i] + 32;
				}
				i++;
		}
		ft_putstr(str);
		ft_putchar('\n');
}

int main(int argc, char **argv)
{
		if (argc != 2)
		{
			ft_putchar('\n');
		}
		else if (argc == 2)
		{
				ulstr(argv[1]);
		}
		return (0);
}
