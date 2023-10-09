#include <unistd.h>

int	repeat_alpha(char c)
{
	int	rep;

	if (c >= 'a' && c <= 'z')
			rep = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
			rep = c - 'A' + 1;
	else
			rep = 1;
	return (rep);
}

int	main(int argc, char **argv)
{
		int rep;

		if (argc >= 2)
		{
				while (*argv[1])
				{
					rep = repeat_alpha(*argv[1]);
					while (rep--)
							write (1, argv[1], 1);
					argv[1]++;
				}
		}
		write (1, "\n", 1);
		return (0);
}
