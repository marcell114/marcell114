#include <unistd.h>

void ft_putchar(char c)
{
		write (1, &c, 1);
}

void rev_print(char *str)
{
		int i;
		
		i = 0;
		while (str[i] != '\0')
		{
				i++;
		}
		i = i - 1;
		while (i >= 0)
		{
				ft_putchar(str[i]);
				i--;
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
				rev_print(argv[1]);
		}
		return (0);
}
