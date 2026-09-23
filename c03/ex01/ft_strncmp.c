#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
{
	char			*s1;
	char			*s2;
	char			*s3;
	char			*s4;

	s1 = "Hello";
	s2 = "Hello";
	s3 = "Hellp";
	s4 = "Hell";
	printf("Comparing '%s' and '%s' (n=5): %d\n",
		s1, s2, ft_strncmp(s1, s2, 5));
	printf("Comparing '%s' and '%s' (n=5): %d\n",
		s1, s3, ft_strncmp(s1, s3, 5));
	printf("Comparing '%s' and '%s' (n=4): %d\n",
		s1, s3, ft_strncmp(s1, s3, 4));
	printf("Comparing '%s' and '%s' (n=5): %d\n",
		s1, s4, ft_strncmp(s1, s4, 5));
	printf("Comparing '%s' and '%s' (n=0): %d\n",
		s1, s3, ft_strncmp(s1, s3, 0));
	printf("Comparing '%s' and '%s' (n=10): %d\n",
		s1, "HelloWorld", ft_strncmp(s1, "HelloWorld", 10));
	return (0);
}
