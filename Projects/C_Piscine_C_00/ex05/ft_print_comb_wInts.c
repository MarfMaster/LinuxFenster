/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:08:04 by maherr            #+#    #+#             */
/*   Updated: 2026/09/28 17:01:57 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	nums;

	nums = 0;
	//char	d1;

	//d1 = '0';
	//char	d2;

	//char	d3;

	while (nums / 100 <= 7)
	{
		//d2 = d1 + 1;
		nums += ((nums / 100) + 1) * 10;
		while ((nums - (nums / 100 * 100)) / 10 <= 8)
		{
			//d3 = d2 + 1;
			nums += (nums % 100) / 10 + 1;
			while (nums % 10 <= 9)
			{
				write(1, "1", 1);//"nums / 100 + 48", 1);
				write(1, "2", 1);//"${nums % 100 / 10 + 48}", 1);
				write(1, "3", 1);//"nums % 10 + 48", 1);
				if (nums / 100 != 7)
					write(2, ", ", 2);
				//d3++;
				nums += 1;
			}
			nums += 10;
		}
		nums += 100;
	}
}
int	main(void)
{
	ft_print_comb();
	return 0;
}
