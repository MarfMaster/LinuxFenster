/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:24:21 by maherr            #+#    #+#             */
/*   Updated: 2026/11/18 12:32:40 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	temp_src[n];
	int	i;

	i = 0;
	while (i < n)
	{
		temp_src[i] = src[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		dest[i] = temp_src[i];
		i++;
	}
}
