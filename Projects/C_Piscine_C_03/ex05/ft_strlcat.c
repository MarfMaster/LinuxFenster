/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:33:37 by maherr            #+#    #+#             */
/*   Updated: 2026/10/15 12:36:03 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
		i1++;
	while (src[i2])
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = 0;
	return (dest);
}
