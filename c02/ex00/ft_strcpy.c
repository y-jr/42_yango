#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest1[20];
	char	dest2[20];
	char	dest3[20];
	char	dest4[20];

	printf("Teste 1: texto normal\n");
	printf("Resultado: %s\n", ft_strcpy(dest1, "Hello World"));
	printf("\nTeste 2: texto vazio\n");
	printf("Resultado: \"%s\"\n", ft_strcpy(dest2, ""));
	printf("\nTeste 3: uma palavra\n");
	printf("Resultado: %s\n", ft_strcpy(dest3, "42"));
	printf("\nTeste 4: texto com espacos e numeros\n");
	printf("Resultado: %s\n", ft_strcpy(dest4, "42 Lisboa 2026"));
	return (0);
}
