#include <unistd.h> 
typedef (TRUE ? FALSE) t_bool;
#define TRUE 0
#define FALSE 1
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments."'\n'
#define ODD_MSG "I have an odd number of arguments."'\n'
void ft_putstr(char *str);
t_bool ft_is_even(int nbr);

