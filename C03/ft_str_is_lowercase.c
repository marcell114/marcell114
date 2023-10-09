#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
    if(!islower(str[i]))
    {
        return 0;
    }
    i++;
    }
    return 1;
}

int main(void)
{
    char str[10] = "nkd";
    int result = ft_str_is_lowercase(str);

    printf(" %d \n", result);
}