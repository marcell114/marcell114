char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_str_is_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a')
			|| (str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (j == 1 && str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
				j = 0;
			}
			else if (str[i] >= '0' && str[i] <= '9')
				j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
int main(void)
{
    printf("&s\n", ft_strcapitalize("hELLO worLd 5F6T7yu"));
}