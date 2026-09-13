#include<unistd.h>


void print_combination(int *combination, int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = combination[i] + '0';
        write(1, &c, 1);
    }
    if (combination[0] != 10 - n)
    {
        write(1, ", ", 2);
    }
}


void ft_print_combn(int n)
{
    
    int combination[10];
    for (int i = 0; i < n; i++)
    {
        combination[i] = i;
    }

    while (combination[0] <= 10 - n)
    {
        print_combination(combination, n);

        int i = n - 1;
        while (i >= 0 && combination[i] == 10 - n + i)
        {
            i--;
        }
        if (i >= 0)
        {
            combination[i]++;
            for (int j = i + 1; j < n; j++)
            {
                combination[j] = combination[j - 1] + 1;
            }
        }
        else
        {
            break;
        }
    }

}

// int main(void)
// {
//     ft_print_combn(3);
//     write(1, "\n", 1);
//     ft_print_combn(2);
//     write(1, "\n", 1);
//     return (0);
// }