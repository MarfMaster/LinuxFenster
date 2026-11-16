/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:48:53 by maherr            #+#    #+#             */
/*   Updated: 2026/10/14 13:53:07 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i1;
	int	i2;

	i1 = argc - 1;
	if (argc > 1)
	{
		while (i1 > 0)
		{
			i2 = 0;
			while (argv[i1][i2])
			{
				write(1, &argv[i1][i2], 1);
				i2++;
			}
			write(1, "\n", 1);
			i1--;
		}
	}
}
//tested successfully
