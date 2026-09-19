unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_count;
	unsigned int	i;

	src_count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	src_count = i;
	i = 0;
	if (size == 0)
		return (src_count);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_count);
}

#include <stdio.h>
int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];
	unsigned int size = 10;
	unsigned int copied;

	copied = ft_strlcpy(dest, src, size);
	printf("Copied: %u\n", copied);
	printf("Destination: %s\n", dest);

	return 0;
}