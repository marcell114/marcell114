#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_numeric(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
    if(!isdigit(str[i]))
    {
        return 0;
    }
    i++;
    }
    return 1;
}

int main(void)
{
    char str[10] = "12345";
    int result = ft_str_is_numeric(str);

    printf(" %d \n", result);
}