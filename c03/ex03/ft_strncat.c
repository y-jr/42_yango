#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest1[50] = "Hello ";
	char	dest2[50] = "Hello ";
	char	dest3[50] = "Hello ";
	char	dest4[50] = "Hello ";
	char	dest5[50] = "";

	printf("Before: '%s'\n", dest1);
	printf("After:  '%s'\n\n", ft_strncat(dest1, "World", 5));
	printf("Before: '%s'\n", dest2);
	printf("After:  '%s'\n\n", ft_strncat(dest2, "World", 3));
	printf("Before: '%s'\n", dest3);
	printf("After:  '%s'\n\n", ft_strncat(dest3, "World", 0));
	printf("Before: '%s'\n", dest4);
	printf("After:  '%s'\n\n", ft_strncat(dest4, "World", 10));
	printf("Before: '%s'\n", dest5);
	printf("After:  '%s'\n\n", ft_strncat(dest5, "Hello", 2));
	return (0);
}
