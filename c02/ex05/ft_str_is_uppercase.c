int ft_str_is_uppercase(char *str){
	unsigned int i;

	i = 0;
	while(str[i]){
		if(!(str[i] >=  && str[i] <= 'Z')){
			return 0;
		}	
		i++;
	}

	return 1;
}
#include <stdio.h>
int main(void){
	char str1[] = "ANGOLa";
	char str2[] = "ONU";
	char str3[] = "";
	char str4[] = "N8N";

	printf("%d\n", ft_str_is_uppercase(str1)); 
	printf("%d\n", ft_str_is_uppercase(str2)); 
	printf("%d\n", ft_str_is_uppercase(str3)); 
	printf("%d\n", ft_str_is_uppercase(str4)); 

	return 0;
}