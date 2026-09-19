int ft_str_is_printable(char *str){
	unsigned int i;

	i = 0;
	while(str[i]){
		if(!(str[i] >= 32 && str[i] <= 126)){
			return 0;
		}	
		i++;
	}

	return 1;
}
#include <stdio.h>
int main(void){
	char str1[] = "Angola é um país da África";
	char str2[] = "Portugal does not has a island called Madeira, but it has a region called Madeira";
	char str3[] = "";
	char str4[] = "\n carro";

	printf("%d\n", ft_str_is_printable(str1)); 
	printf("%d\n", ft_str_is_printable(str2)); 
	printf("%d\n", ft_str_is_printable(str3)); 
	printf("%d\n", ft_str_is_printable(str4)); 

	return 0;
}