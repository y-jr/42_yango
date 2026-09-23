#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	char	dest3[50] = "";
	char	dest4[50] = "42 ";
	char	dest5[50] = "Hello";

	printf("Before: '%s'\n", dest1);
	printf("After:  '%s'\n\n", ft_strcat(dest1, "World"));
	printf("Before: '%s'\n", dest2);
	printf("After:  '%s'\n\n", ft_strcat(dest2, "42"));
	printf("Before: '%s'\n", dest3);
	printf("After:  '%s'\n\n", ft_strcat(dest3, "Hello"));
	printf("Before: '%s'\n", dest4);
	printf("After:  '%s'\n\n", ft_strcat(dest4, "World"));
	printf("Before: '%s'\n", dest5);
	printf("After:  '%s'\n\n", ft_strcat(dest5, ""));
	return (0);
}
