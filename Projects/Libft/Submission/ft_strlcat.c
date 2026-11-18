/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:56:32 by maherr            #+#    #+#             */
/*   Updated: 2026/11/18 15:19:55 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);

	while (len_dst + i2 < size - 1)
	{
		dst[len_dst + i2] = src[i2];
		i2++;
	}

	dst[len_dst + i2] = 0;

	return (len_dst + ft_strlen(src));
}
