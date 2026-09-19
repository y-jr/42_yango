int ft_str_is_numeric(char *str){
	unsigned int i;

	i = 0;
	while(str[i]){
		if(!(str[i] >= '0' && str[i] <= '9')){
			return 0;
		}	
		i++;
	}

	return 1;
}
#include <stdio.h>
int main(void){
	char str1[] = "123456789";
	char str2[] = "!23";
	char str3[] = "";
	char str4[] = "12a";

	printf("%d\n", ft_str_is_numeric(str1)); 
	printf("%d\n", ft_str_is_numeric(str2)); 
	printf("%d\n", ft_str_is_numeric(str3)); 
	printf("%d\n", ft_str_is_numeric(str4)); 

	return 0;
}