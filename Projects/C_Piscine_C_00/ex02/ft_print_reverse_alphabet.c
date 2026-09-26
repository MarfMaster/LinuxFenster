#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char yep;
    for (yep = 'a'; yep <= 'z'; ++yep)
    {
        char nop = 'z' - yep + 'a';
	    write(1, &nop, 1);
    };
};
int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
};
