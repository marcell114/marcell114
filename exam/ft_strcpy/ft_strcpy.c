//#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
		int i; 

		i = 0;
		while (s2[i] != '\0')
		{
				s1[i] = s2[i];
				i++;
		}
		s1[i] = '\0';
		return (s1);
}
/*
int main(void)
{
    char src[6] = "hello";
    char dest[6];

    ft_strcpy(dest, src);
    printf("%s\n", dest);
}*/
