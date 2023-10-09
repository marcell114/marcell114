#include <unistd.h>

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
int main(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        write (1, argv[i], charCounter(argv[i]));
        write (1, "\n", 1);
        i++;
    }
}
