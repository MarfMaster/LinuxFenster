/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:22:52 by maherr            #+#    #+#             */
/*   Updated: 2026/10/01 21:04:45 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	v1;

	i = 0;
	while ((size / 2) > i)
	{
		v1 = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = v1;
		i++;
	}
}
/*int main(void)
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  ft_rev_int_tab(&arr, sizeof(arr)/sizeof(arr[0]));
}*/
