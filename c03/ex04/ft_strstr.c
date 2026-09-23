#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "This is a test";
	char	str3[] = "42 School";
	char	str4[] = "Hello World";
	char	str5[] = "Hello";

	printf("Searching 'World' in '%s': %s\n",
		str1, ft_strstr(str1, "World"));
	printf("Searching 'is' in '%s': %s\n",
		str2, ft_strstr(str2, "is"));
	printf("Searching 'School' in '%s': %s\n",
		str3, ft_strstr(str3, "School"));
	printf("Searching 'World' in '%s': %s\n",
		str5, ft_strstr(str5, "World"));
	printf("Searching '' in '%s': %s\n",
		str4, ft_strstr(str4, ""));
	return (0);
}
