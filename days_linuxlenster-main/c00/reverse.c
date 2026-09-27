#include <unistd.h>


void ft_print_reverse_alphabet(void)
{
    char yep;

    yep = 122;
    while (yep >= 97)
    {
        write(1, &yep, 1);
        yep--;
    }
}


int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
