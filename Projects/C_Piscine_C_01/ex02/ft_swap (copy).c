/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherr <maherr@student.42wolfsburg.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:19:52 by maherr            #+#    #+#             */
/*   Updated: 2026/10/01 17:24:01 by maherr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>
void ft_swap(int *a, int *b)
{
	int a0 = *a;
	int b0 = *b;
	*a = b0;
	*b = a0;
}
/*int main(void)
{
	int ze = '0' + 6;
	int* p_ze = &ze;
	int ye = '0' + 7;
	int* p_ye = &ye;
	write(1, p_ze, 1);
	write(1, p_ye, 1);

	ft_swap(p_ze, p_ye);
	write(1, p_ze, 1);
	write(1, p_ye, 1);
	return 0;
}*/
