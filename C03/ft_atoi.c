#include <stdio.h>
#include <stdbool.h>

int ft_atoi(char *str)
{
    int result;
    bool isNegative;
    int i;

    isNegative = false;
    i = 0;
    while (str[i] != 0)
    {
        isspace(str[i]);
        if (str[i] == '+')
        {
            continue;;
        }
        else if (str[i] == '-')
        {
            isNegative = !isNegative;
        }
        isdigit(str[i]);
        i++;
    }
    return(-result);
}
/*
1.Initialize an integer to store the result and a boolean to track the sign.

2.Use a loop to iterate over the string. Use the isspace() function to skip 
any whitespace at the beginning.

3.After the whitespace, check for '+' or '-' signs. 
If you encounter a '-', flip the sign boolean.

4.Continue the loop until you encounter a character 
that is not a digit. You can use the isdigit() function to check this.

5.For each digit, multiply the current result by 10 and add 
the new digit (remember to convert it from char to int).

6.After the loop, if the sign boolean is true for negative, multiply the result by -1.

7.Return the result.
*/