int ft_c_is_alpha(char c){
		if(c >= 'a' && c <= 'z') 
			return 1;
		if(c >= 'A' && c <= 'Z') 
			return 1;
		if(c >= '0' && c <= '9') 
			return 1;

	return 0;
}

char ft_c_upcase(char c, int *capitalize_next){
	if(c >= 'a' && c <= 'z'){
		c = c - 32;
	}
	*capitalize_next = 0;
	return c;
}

char ft_c_lowcase(char c){
	if(c >= 'A' && c <= 'Z')
		c = c + 32;

	return c;
}

char *ft_strcapitalize(char *str){
	unsigned int i;
	int capitalize_next;

	i = 0;
	capitalize_next = 1;
	while(str[i] != '\0'){
		if(ft_c_is_alpha(str[i])){
			if(capitalize_next){
				str[i] = ft_c_upcase(str[i], &capitalize_next);
			}else
			{
				str[i] = ft_c_lowcase(str[i]);
			}
		}else{
			capitalize_next = 1;
		}
		i++;
	}

	return str;
}

#include <stdio.h>
int main(void){
	char str1[] = "UM PARAGRAFO COM VÁRIAS PA-3LAVRAS, E ALG-UMAS PALAVRAS COM LETRAS MA-IÚSCULAS NO MEIO";

	printf("%s\n", ft_strcapitalize(str1)); 

	return 0;
}