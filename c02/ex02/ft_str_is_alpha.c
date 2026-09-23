#include <stdio.h>

int	ft_is_lwcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_lwcase(str[i]) && !ft_is_upcase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "HelloWorld";
	str2 = "Hello123";
	str3 = "";
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	return (0);
}
