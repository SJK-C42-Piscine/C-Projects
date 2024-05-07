/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:17:12 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/12 15:39:14 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_integer(int a)
{
	char	digit;

	digit = a + '0';
	write(1, &digit, 1);
}

void	ft_print_numbers(void)
{
	int	digit;

	digit = 0;
	while (digit < 10)
	{
		put_integer(digit);
		digit++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
