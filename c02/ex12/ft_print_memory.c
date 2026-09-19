
void print_hex_address(unsigned long n){
	char *hex = "0123456789abcdef";
	int i;
	char c;

	i = 0;
	while(i < 16){
		c = hex[(n >> (60 - i * 4)) & 0xf];
		write(1, &c, 1);
		i++;
	}
}

void *ft_print_memory(void *addr, unsigned int size){
	unsigned long n;

	n = (unsigned long)addr;
	


	return (addr);
}

int main(void){
	char str[] = "Coucou\nu vas bien ?";
	ft_print_memory(str, 20);
	return 0;
}