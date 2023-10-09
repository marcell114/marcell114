#include <stdio.h>

int ft_sqrt(int nb)
{
    int guess;
    int accuracy;

    if ((nb == 0) || (nb == 1))
    {
        return (nb);
    }
    else
    {
        guess = nb;
        accuracy = 0.000001; 
    }
    while ((guess - nb / guess) > accuracy)
    {
       guess = (guess + nb / guess) / 2;
    }
    if (guess * guess == nb)
    {
        return (guess);
    }
    else
    {
        return (0);
    }
        return (guess);  
}
int main(void)
{
    printf ("%d\n", ft_sqrt(361));
}