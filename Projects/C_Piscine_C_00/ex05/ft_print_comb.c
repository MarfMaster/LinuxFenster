#include <unistd.h>
void ft_print_comb(void)
{
	char digit1;
	char digit2;
	char digit3;

	for (digit2 = '0'; digit2 < __INT8_MAX__; digit2++)
	{
		if(digit2 != digit1)
		{
			break;
		};
	};
	for (digit3 = '0'; digit3 < __INT8_MAX__; digit3++)
	{
		if(digit3 != digit1 && digit3 != digit2)
		{
			break;
		};
	};
	
};
int main(void)
{
	ft_print_comb();
	return 0;
};