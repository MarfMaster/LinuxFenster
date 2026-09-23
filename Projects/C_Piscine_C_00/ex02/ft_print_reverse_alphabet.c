#include <unistd.h>
void ft_print_reverse_alphabet()
{
    char yep;
    for (yep = 'a'; yep <= 'z'; ++yep)
    {
        char nop = 'z' - yep + 'a';
	    write(1, &nop, 1);
    };
}
void main()
{ft_print_reverse_alphabet();}