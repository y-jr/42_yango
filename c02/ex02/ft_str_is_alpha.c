int ft_str_is_alpha(char *str){
	unsigned int i;

	i = 0;
	while(str[i]){
		if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')){
			return 0;
		}	
		i++;
	}

	return 1;
}
#include <stdio.h>
int main(void){
	char str1[] = "HelloWorld";
	char str2[] = "Hello World!";
	char str3[] = "";

	printf("%d\n", ft_str_is_alpha(str1)); // Output: 1
	printf("%d\n", ft_str_is_alpha(str2)); // Output: 0
	printf("%d\n", ft_str_is_alpha(str3)); // Output: 1

	return 0;
}