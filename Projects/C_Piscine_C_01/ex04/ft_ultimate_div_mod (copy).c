/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod (copy).c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:50:06 by maherr            #+#    #+#             */
/*   Updated: 2026/10/01 17:59:12 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;
	
	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}
int main(void)//test is structured incorrectly but above function works as intended, 9 / 2 = 4 and 9 % 2 = 1
{
	int a = 9;
	int* p_a = &a;
	int b = 2;
	int* p_b = &b;
	int c = 0;
	int d = 0;
	ft_ultimate_div_mod(p_a, p_b);
	char ca = a + '0';
	write(1, &ca, 1);
	write(1, " / ", 3);
	char cb = b + '0';
	write(1, &cb, 1);
	write(1, " = ", 3);
	c += '0';
	write(1, &c, 1);
	write(1, ", rest is ", 10);
	d += '0';
	write(1, &d, 1);
	return 0;
}
