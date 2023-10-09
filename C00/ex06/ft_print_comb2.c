#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print(int a)
{
   if (a > 9)
   {
    ft_putchar(a / 10 + '0');
    ft_putchar(a % 10 + '0');
   }
   else
   {
    ft_putchar(0 + '0');
    ft_putchar(a + '0');
   }
}
void ft_print_comb2(void)
{
    int aa;
    int bb;

    aa = 0;
    while (aa <= 99)
    {
        bb = aa + 1;
        while (bb <= 99)
        {
            ft_print(aa);
            ft_putchar(' ');
            ft_print(bb);
            if (aa != 98)
            {
                write (1, ", ", 2);
            }
            bb++;
        }
        aa++;
    }
}

int main(void)
{
    ft_print_comb2();
}