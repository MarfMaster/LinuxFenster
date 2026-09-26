void ft_ultimate_div_mod(int *a, int *b)
{
	int result = *a / *b;
	int remainder = *a % *b;
	*a = result;
	*b = remainder;
};
