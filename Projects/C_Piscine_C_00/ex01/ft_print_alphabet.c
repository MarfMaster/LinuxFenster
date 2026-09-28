/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:10:45 by maherr            #+#    #+#             */
/*   Updated: 2026/09/28 18:27:47 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	yep;

	yep = 'a';
	while (yep <= 'z')
	{
		write(1, &yep, 1);
		yep++;
	}
}
