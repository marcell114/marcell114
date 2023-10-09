#include <unistd.h>
void ft_putchar(char c)
{
		write (1, &c, 1);
}

void ft_putstr(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
				ft_putchar(str[i]);
				i++;
		}
}

void last_word(char *str)
{
		int i;
		
		i = 0;
		while (str[i] != '\0')
		{
				i++;
		}
		i -= 1;
		while (str[i] == ' ' || str[i] == '\t')
		{
			i--;	
		}
		while ((str[i] != ' ' && str[i] != '\t') && i >= 0)
		{
			i--;
		}
		i += 1;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			ft_putchar(str[i]);
			i++;
		}
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
				last_word(argv[1]);
		}
		return (0);
}

