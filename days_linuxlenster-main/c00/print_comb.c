#include <unistd.h>

void ft_print_comb(void)
{
    char  d1 = '0';  //
    char  d2;  
    
    while (d1 <= '9')
    {
        d2 = d1 + 1;
        while (d2 <= '8')
        {
            write(1, &d1, 1);
            write (1, &d2, 1);
            write (1, " ", 1);
            d2++;
        }
        d1++;
    }
}

int main(void)
{
	ft_print_comb();
	return 0;
}
