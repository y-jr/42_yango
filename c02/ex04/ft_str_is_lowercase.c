int ft_str_is_lowercase(char *str){
	unsigned int i;

	i = 0;
	while(str[i]){
		if(!(str[i] >= 'a' && str[i] <= 'z')){
			return 0;
		}	
		i++;
	}

	return 1;
}
#include <stdio.h>
int main(void){
	char str1[] = "Angola";
	char str2[] = "angola";
	char str3[] = "";
	char str4[] = "angol@";

	printf("%d\n", ft_str_is_lowercase(str1)); 
	printf("%d\n", ft_str_is_lowercase(str2)); 
	printf("%d\n", ft_str_is_lowercase(str3)); 
	printf("%d\n", ft_str_is_lowercase(str4)); 

	return 0;
}