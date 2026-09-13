#include<unistd.h>

void ft_is_negative(int n)
{
    char c;

    if (n < 0)
        c = 'N';
    else
        c = 'P';
    write(1, &c, 1);
}

// int main(void)
// {
//     ft_is_negative(-1);
//     ft_is_negative(0);
//     ft_is_negative(1);
//     return (0);
// }