#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[i] != '\0' && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char	dest1[50] = "Hello ";
	char	dest2[50] = "Hello ";
	char	dest3[10] = "Hello ";
	char	dest4[10] = "Hello ";
	char	dest5[6] = "Hello";

	printf("Before: '%s'\n", dest1);
	printf("Return: %u\n", ft_strlcat(dest1, "World", 50));
	printf("After:  '%s'\n\n", dest1);
	printf("Before: '%s'\n", dest2);
	printf("Return: %u\n", ft_strlcat(dest2, "World", 10));
	printf("After:  '%s'\n\n", dest2);
	printf("Before: '%s'\n", dest3);
	printf("Return: %u\n", ft_strlcat(dest3, "World", 10));
	printf("After:  '%s'\n\n", dest3);
	printf("Before: '%s'\n", dest4);
	printf("Return: %u\n", ft_strlcat(dest4, "World", 8));
	printf("After:  '%s'\n\n", dest4);
	printf("Before: '%s'\n", dest5);
	printf("Return: %u\n", ft_strlcat(dest5, "World", 5));
	printf("After:  '%s'\n\n", dest5);
	return (0);
}
