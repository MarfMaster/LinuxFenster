/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:31:27 by maherr            #+#    #+#             */
/*   Updated: 2026/10/01 14:50:02 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb2(void)
{
	int	d1;
	int	d2;
	char	arr[100][2];
	while (i<100)
	{
		arr[i][0] = i / 10 + '0';
		arr[i][1] = i % 10 + '0';
		i++;
	}
	while (d1 < 100)
	{
		d2 = d1 + 1;
		while (d2 < 100)
		{
			write(1, arr[i], 2);
			write(1, " ", 1);
			write(1, arr[j], 2);
			if (!(d1 == 98 && d2 == 99))
			{

			}
			j++;
		}
		i++;
	}
}
int main(void)
{
	ft_print_comb2();
}
