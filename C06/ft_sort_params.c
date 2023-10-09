#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        {
            return (0);
        }
        else
        {
            return (1);
        }
}
int charCounter(char *progName)
{
    int i;

    i = 0;
    while (progName[i] != 0)
    {
        i++;
    }
    return (i);
}
// int compare_and_swap(char *s1, char *s2)
// {
//     int result;
//     char *temp;

//     result = ft_strcmp(s1, s2);
//     if (result > 0)
//     {
//         temp = s1;
//         s1 = s2;
//         s2 = temp;
//     }
    
// }

// int print_op(char *p1, char *p2)
// {
//     int print;

//     print = 1;
//     while (print < p2)
//     {
//         write(1, p1[print], charCounter(p1[print]));
//         write(1, "\n", 1);
//         print++;
//     }
// }
int main(int argc, char **argv)
{
    int i;
    int j;
    int print;
    char *temp;
    char result;

    i = 1;
    while (i != (argc - 1))
    {
        j = i + 1;
        // compare_and_swap((argv[i], argv[j]));  
        while (j < (argc))
        {
            result = ft_strcmp(argv[i], argv[j]);
            if (result > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
    // print_op(argv, argc);
    print = 1;
    while (print < argc)
    {
        write(1, argv[print], charCounter(argv[print]));
        write(1, "\n", 1);
        print++;
    }
}