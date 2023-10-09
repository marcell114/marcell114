//Reproduce the behavior of the function strcpy (man strcpy).
//The  strcpy()  function  copies the string pointed to by src, including
//he terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
//The  strings  may  not overlap, and the destination string dest must be
//large enough to receive the copy.  Beware  of  buffer  overruns!   (See
//BUGS.)

//#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
    dest[i] = src[i];
    i++;
}
    dest[i] = '\0';
    return dest;
}
int main(void)
{
    char src[6] = "hello";
    char dest[6];

    ft_strcpy(dest, src);
    printf("%s\n", dest);
}