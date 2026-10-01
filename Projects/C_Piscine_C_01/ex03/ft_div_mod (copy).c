/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:30:38 by maherr            #+#    #+#             */
/*   Updated: 2026/10/01 17:43:49 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main(void)
{
	int a = 9;
	int b = 2;
	int c = 0;
	int d = 0;
	ft_div_mod(a, b, &c, &d);
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
