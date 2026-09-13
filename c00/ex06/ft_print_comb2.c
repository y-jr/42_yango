#include<unistd.h>

void ft_print_comb2(void)
{
    char a;
    char b;

    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            if (a < b)
            {
                write(1, &a, 1);
                write(1, &b, 1);
                if (!(a == '8' && b == '9'))
                {
                    write(1, ", ", 2);
                }
            }
            b++;
        }
        a++;
    }
}

// int main(void)
// {
//     ft_print_comb2();
//     return (0);
// }