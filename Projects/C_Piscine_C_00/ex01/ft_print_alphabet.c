#include <unistd.h>
void ft_print_alphabet()
{
    char yep;
    for (yep = 'a'; yep <= 'z'; ++yep)
    {
	    write(1, &yep, 1);
    };
}
void main()
{ft_print_alphabet();}