#include <unistd.h>

void ft_print_alphabet(void)
{
    char yep;

    yep = 1;
    while (yep <= 122)
    {
        write(1, &yep, 1);
        write(1, "\n", 1);
        yep++;
    }

}



int main(void)
{
	ft_print_alphabet();
	return 0;
}
