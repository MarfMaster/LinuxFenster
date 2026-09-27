#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(void)
{
	ft_putchar('x');
	return 0;
}


/*

program == program x(list of code incstructions)
process == program x running (code being executed)


for every provess that we run, a memory layout gets created to hold the code of the process


memory layout 
stack
stack frame/funciton farme
*/












