/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:36:53 by maherr            #+#    #+#             */
/*   Updated: 2026/09/28 18:29:54 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer;

	if (n < 0)
		answer = 'N';
	else
		answer = 'P';
	write(1, &answer, 1);
}
