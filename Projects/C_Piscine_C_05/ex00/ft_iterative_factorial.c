/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:29:01 by maherr            #+#    #+#             */
/*   Updated: 2026/10/15 11:46:51 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	if (nb < 1)
		return (0);
	i = 1;
	n = 1;
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
/*#include <unistd.h>
int main(void)
{
	char z = '0' + ft_iterative_factorial(-1); 
	write(1, &z, 1);
}tested successfully*/
