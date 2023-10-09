#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	int_to_strs(int nb) 
{
	if (nb < 0) {
		int_to_strs('-');
		nb = -nb;
	}
	if (nb >= 10) {
		int_to_strs(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) int_to_strs(nb + 48);
}
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char		*str;
	int			i;

	i = 0;
	str = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *new_str;
	int size;
	char str;
	char copy;
	int i;

	new_str = malloc ((ac + 1)  * sizeof(t_stock_str));
	if (new_str == NULL)
    {
        return (NULL);
    }
	i = 0;
	while (i < ac)
	{
		new_str[i].size = ft_strlen(av[i]);
		new_str[i].str = av[i];
		new_str[i].copy = ft_strdup(av[i]);
		if(new_str[i].copy == NULL)
		{
				return (NULL);
		}
		i++;
	}
	new_str[ac].str = NULL;
	return (new_str);
}

// int main(int argc, char **argv) 
// // {
// //     t_stock_str *new_str; 
// //     int i;

// //     new_str = ft_strs_to_tab(argc, argv); 

// //     i = 0;
// //     while (new_str[i].str != NULL)
// //     {
// //         printf("Size: %d\n", new_str[i].size);
// //         printf("Str: %s\n", new_str[i].str);
// //         printf("Copy: %s\n", new_str[i].copy);
// //         i++;
// //     }
// // }

// // void ft_show_tab(struct s_stock_str *par)
// // {
// {
// char size_str[12]; // Buffer for size string
// int i = 0;
// t_stock_str *new_str;

// while (new_str[i].str != NULL)
// {
//     // sprintf(size_str, "%d", new_str[index].size); // Convert size to string
//     int_to_strs(new_str[i].size);
//     write(1, "Size: ", 6);
//     write(1, size_str, ft_strlen(size_str));
//     write(1, "\n", 1);
//     write(1, "Str: ", 5);
//     write(1, new_str[i].str, ft_strlen(new_str[i].str));
//     write(1, "\n", 1);
//     write(1, "Copy: ", 6);
//     write(1, new_str[i].copy, ft_strlen(new_str[i].copy));
//     write(1, "\n", 1);
//     i++;
// }
// }