#include <unistd.h>
void ft_is_negative(int n)
{
	char answer;
	if(n < 0)
	{
		answer = 'N';
	};
	else
	{
		answer = 'P';
	};
	write(1, &answer, 1);
};
int main(void)
{
	ft_is_negative(-1);
	return 0;
};
