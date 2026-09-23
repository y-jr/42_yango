#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "Hello";
	s2 = "Hello";
	s3 = "Hellp";
	s4 = "Hell";
	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3));
	printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strcmp(s1, s4));
	printf("Comparing '%s' and '%s': %d\n", "Hello", "HelloWorld", ft_strcmp("Hello", "HelloWorld"));
	return (0);
}
