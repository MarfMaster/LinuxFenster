/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiekal <ahiekal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:20:22 by ahiekal           #+#    #+#             */
/*   Updated: 2026/10/01 15:20:23 by ahiekal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	twodigitformat(char data[100][2]);

void	ft_print_comb2(void)
{
	char	arr[100][2];
	int		i;
	int		j;

	twodigitformat(arr);
	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			write(1, arr[i], 2);
			write(1, " ", 1);
			write(1, arr[j], 2);
			if (!(i == 98 && j == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			j++;
		}
		i++;
	}
}

void	twodigitformat(char data[100][2])
{
	int	k;

	i = 0;
	while (i < 100)
	{
		data[k][0] = k / 10 + '0';
		data[k][1] = k % 10 + '0';
		i++;
	}
}
