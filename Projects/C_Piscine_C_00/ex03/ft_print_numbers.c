#include <unistd.h>
void ft_print_numbers()
{
    char i;
    for (i = '0'; i <= '9'; i++)
    {
        write(1, &i, 1);
    }
};
void main()
{ft_print_numbers();}