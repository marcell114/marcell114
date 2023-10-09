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

int main(int argc, char *argv[])
{
    char *progName;

    (void)argc;  

    progName = argv[0];
    write (1, progName, charCounter(progName));
    write (1, "\n", 1);
    return (0);
}