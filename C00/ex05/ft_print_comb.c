/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mir.jakub <mir.jakub@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:03:37 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/27 21:49:24 by mir.jakub        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i <= 7)
	{
		j = i;
		while (++j <= 8)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}