/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:07:51 by maherr            #+#    #+#             */
/*   Updated: 2026/10/07 14:25:58 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//supposed to compare the value of ascii chars against each other, not length
int	ft_strcmp(char *s1, char *s2)
{
	int	len1;
	int	len2;

	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (len1 > len2)
		return (1);
	if (len2 > len1)
		return (-1);
	if (*s1 == *s2)
		return 0;
}
