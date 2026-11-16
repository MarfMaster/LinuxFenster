/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:31:27 by maherr            #+#    #+#             */
/*   Updated: 2026/10/01 16:26:58 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	populate_array(char ddstr[100][2])
{
	int	i;

	i = 0;
	while (i < 100)
	{
		ddstr[i][0] = i / 10 + '0';
		ddstr[i][1] = i % 10 + '0';
		i++;
	}
}

void	ft_print_comb2(void)
{
	char	ddstr[100][2];
	int		d1;
	int		d2;

	populate_array(ddstr);
	d1 = 0;
	while (d1 < 100)
	{
		d2 = d1 + 1;
		while (d2 < 100)
		{
			write(1, ddstr[d1], 2);
			write(1, " ", 1);
			write(1, ddstr[d2], 2);
			if (!(d1 == 98 && d2 == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			d2++;
		}
		d1++;
	}
}
