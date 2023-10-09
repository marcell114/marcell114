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

void shifter(char *str)
{
	int i;

	i = 0;
			while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
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
		else
		{
			shifter(argv[1]);
		}
		return (0);
}
