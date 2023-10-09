#include <stdio.h>

int ft_is_prime(int n)
{
    int i;

    if ( n < 2)
    {
        return (0);
    }
    i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
#include <stdbool.h>

int ft_find_next_prime(int nb)
{
  while (true)
  {
    if (ft_is_prime(nb) == true)
    {
        return (nb);
    }
    nb = nb + 1;
  }  
}
int main(void)
{
    printf ("%d\n", ft_find_next_prime(42));
}