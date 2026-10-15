/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:05:59 by maherr            #+#    #+#             */
/*   Updated: 2026/10/15 15:32:13 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*#include <unistd.h>
int main(void)
{
	char c = ft_iterative_power(3, 2) + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return 0;
}tested successfully*/
