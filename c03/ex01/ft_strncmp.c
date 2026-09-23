#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (i < n && s1[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	if(i < n)
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
	s2 = "HelloA";
	s3 = "HellpA";
	s4 = "Hell";
	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strncmp(s1, s2, 5));
	printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strncmp(s1, s3, 5));
	printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strncmp(s1, s4, 5));
	printf("Comparing '%s' and '%s': %d\n", "Hello", "HelloWorld", ft_strncmp("Hello", "HelloWorld", 5));
	return (0);
}
