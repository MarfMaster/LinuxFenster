/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:15:48 by maherr            #+#    #+#             */
/*   Updated: 2026/10/12 18:44:56 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (str[i1])
	{
		i2 = 0;
		while (str[i1 + i2] == to_find[i2])
		{
			i2++;
			if (!to_find[i2])
			{
				return (&str[i1]);
			}
		}
		i1++;

	}
	return (NULL);
}
