#include <unistd.h>
void ft_print_alphabet(void)
{
    char yep;
    for (yep = 'a'; yep <= 'z'; ++yep)
    {
	    write(1, &yep, 1);
    };
};
int main(void)
{
	ft_print_alphabet();
	return 0;
};
