#include <unistd.h>

int	ft_c_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	print_non_printable(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[n / 16], 1);
	write(1, &hex[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (ft_c_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			print_non_printable(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\0u vas bien ?";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
