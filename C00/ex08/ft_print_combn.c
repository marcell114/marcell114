#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print(int a)
{

}
void ft_print_combn(int n)
{

}

Create a recursive function that takes an array of characters
 (to store the current combination), the current length of the combination,
  and the starting number for the next combination.
If the current length equals n, print the array.
Otherwise, for each number from the starting number to 9,
 add the number to the array and call the recursive function with the updated array, 
 the length incremented by 1, and the next number incremented by 1.
After the recursive call, remove the last number from the array (backtracking).